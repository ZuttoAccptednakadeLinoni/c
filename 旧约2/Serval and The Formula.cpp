#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
	int n,m;
	cin>>n>>m;
	int ans=0;
	//cout<<(1ll<<32)<<endl;
	if(n==m){
		cout<<-1<<endl;
		return;
	}
	else cout<<(1ll<<32)-max(n,m)<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
