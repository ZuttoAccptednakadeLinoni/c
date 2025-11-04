#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll comnum[5005][5005];
ll fastPow(ll a, ll b, ll q) {
	ll res = 1 % q;
	while(b) {
		if(b & 1) res = (res * a) % q;
		a = (a * a) % q;
		b >>= 1;
	}

	return res;
}
int main(){
	ll n,m;
	cin>>n>>m;
	ll q;
	cin>>q;
	ll sum=0;
	comnum[1][1]=1;
	for(int i=0;i<=5001;i++){
		comnum[i][i]=1;
		comnum[i][0]=1;
	}
	for(int i=1;i<=5001;i++){
		for(int j=1;j<=i;j++){
			comnum[i][j]=(comnum[i - 1][j - 1] % q + comnum[i - 1][j] % q) % q;
		}
	}
	for(int k=1;k<=n;k++){
		sum = (sum + (fastPow(fastPow(2, k, q) - 1, m - 1, q) % q * comnum[n][k] % q * fastPow(fastPow(2, (n - k), q), (m - 1), q)) % q) % q;
	}
	cout<<sum;
}
