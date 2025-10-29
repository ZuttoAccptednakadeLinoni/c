//
// Created by k0itoYuu on 2025/8/5.
//
#include<bits/extc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
const ll MOD = 998244353;
int t;
ll a,b,c,d;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll bmul(ll a, ll b, ll m) {  // 快速乘
    ull c = (ull)a * (ull)b - (ull)((long double)a / m * b + 0.5L) * (ull)m;
    if (c < (ull)m) return c;
    return c + m;
}

ll qpow(ll x, ll p, ll mod) {  // 快速幂
    ll ans = 1;
    while (p) {
        if (p & 1) ans = bmul(ans, x, mod);
        x = bmul(x, x, mod);
        p >>= 1;
    }
    return ans;
}

bool Miller_Rabin(ll p) {  // 判断素数
    if (p < 2) return false;
    if (p == 2) return true;
    if (p == 3) return true;
    ll d = p - 1, r = 0;
    while (!(d & 1)) ++r, d >>= 1;  // 将d处理为奇数
    for (ll k = 0; k < 10; ++k) {
        ll a = rand() % (p - 2) + 2;
        ll x = qpow(a, d, p);
        if (x == 1 || x == p - 1) continue;
        for (int i = 0; i < r - 1; ++i) {
            x = bmul(x, x, p);
            if (x == p - 1) break;
        }
        if (x != p - 1) return false;
    }
    return true;
}

ll Pollard_Rho(ll x) {
    ll s = 0, t = 0;
    ll c = (ll)rand() % (x - 1) + 1;
    int step = 0, goal = 1;
    ll val = 1;
    for (goal = 1;; goal *= 2, s = t, val = 1) {  // 倍增优化
        for (step = 1; step <= goal; ++step) {
            t = (bmul(t, t, x) + c) % x;
            val = bmul(val, abs(t - s), x);
            if ((step % 127) == 0) {
                ll d = gcd(val, x);
                if (d > 1) return d;
            }
        }
        ll d = gcd(val, x);
        if (d > 1) return d;
    }
}

void fac(ll x,unordered_map<ull, int>& factors) {
    if (x < 2) return;
    if (Miller_Rabin(x)) {
        factors[x] += 1;
        return;
    }
    ll p = x;
    while (p >= x) p = Pollard_Rho(x);
    while ((x % p) == 0) x /= p;
    fac(x,factors), fac(p,factors);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> t;
    while (t--) {
        srand((unsigned)time(NULL));
        cin >> a >> b >> c >> d;
        ll g = gcd(a, c);
        if (g == 1) {
            cout << "1\n";
            continue;
        }
        unordered_map<ull, int> factors_g;
        fac(g, factors_g);
        ull ans = 1;
        for (auto& [p, cnt_g] : factors_g) {
            ull cnt_a = 0;
            ull temp_a = a;
            while (temp_a % p == 0) {
                cnt_a++;
                temp_a /= p;
            }
            ull cnt_c = 0;
            ull temp_c = c;
            while (temp_c % p == 0) {
                cnt_c++;
                temp_c /= p;
            }
            ull exponent = min(b * cnt_a, d * cnt_c);
            ans = bmul(ans,qpow(p, exponent, MOD),MOD);
        }
        cout << ans << '\n';
    }
    return 0;
}