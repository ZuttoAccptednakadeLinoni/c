#include<bits/stdc++.h>
using namespace std;
int MOD = int(1e9+7);

typedef long long LL;
LL pow(LL a, LL b, LL m) {
	if(b == 0)
		return 1;
	LL tmp = pow(a, b >> 1, m) % m;
	return (b & 1 ? a : 1) * tmp % m * tmp % m;
}
void solve(){
	int l,r,k;
	cin>>l>>r>>k;
	cout<<((pow(9 / k + 1, r, MOD) - pow(9 / k + 1, l, MOD) + MOD) % MOD);
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
