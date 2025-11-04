#include<bits/stdc++.h>
#define int long long
#define pqueue piroirty_queue
#define ll long long
const int MAXN = 1e7 + 7, INF = 1e18 + 7, MOD = 998244353;
using namespace std;
int fact[MAXN];
int qp(ll x, ll k){
	int ans = 1;
	int base = x;
	while(k){
		if(k & 1){
			ans *= base;
			ans %= MOD;
		}
		k >>= 1;
		base *= base;
		base %= MOD;
	}
	return ans;
}
int inv(ll x){
	return qp(x, MOD-2);
}
void solve(){
	fact[0] = 1;
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		fact[i] = fact[i - 1] * i;
		//inv(i);
		fact[i] %= MOD;
	}
	int ans = 0;
	for(int i = 1; i * 2 - 1 <= n;i++){
		ans = ans + (fact[n - i] * inv(fact[n - 2 * i + 1]) % MOD) * fact[n - i] % MOD;
		ans %= MOD;
	}
	cout << ans << "\n";
}
signed main(){
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
	int T = 1;
//	cin >> T;
	while(T--) solve();
	return 0;
}

