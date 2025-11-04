#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,t,l;
	cin>>n>>t>>l;
	int b,e,ans=0;
	int se=0;
	for(int i=1;i<=n;i++){
		cin>>b>>e;
		ans=max(b-se,ans);
		se=e;
	}
	ans=max(l-se,ans);
	if(ans>=t)cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
