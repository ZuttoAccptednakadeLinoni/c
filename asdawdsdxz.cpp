#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

const int MAX = 5000010; // 5e6+10
vector<int> mind(MAX, 0);
vector<int> primes;

void build_sieve() {
    mind[0] = mind[1] = 1;
    for (int i = 2; i < MAX; i++) {
        if (mind[i] == 0) {
            mind[i] = i;
            primes.push_back(i);
        }
        for (size_t j = 0; j < primes.size(); j++) {
            if (primes[j] > mind[i] || i * primes[j] >= MAX)
                break;
            mind[i * primes[j]] = primes[j];
        }
    }
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    build_sieve();
    int t;
    cin >> t;
    vector<int> count(MAX, 0);
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int g = (n % 2 == 0) ? 2 : 1;
        vector<int> to_clear;
        for (int i = 0; i < n; i++) {
            int x = a[i];
            while (x > 1) {
                int p = mind[x];
                int exp = 0;
                while (mind[x] == p) {
                    exp++;
                    x /= p;
                }
                if (count[p] == 0) {
                    to_clear.push_back(p);
                }
                count[p] += exp;
            }
        }
        bool ok = true;
        for (int p : to_clear) {
            if (count[p] % g != 0) {
                ok = false;
            }
            count[p] = 0;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}