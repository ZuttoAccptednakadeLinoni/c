#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],b[N],d[N];
void solve(){
	int n,m;
	cin>>n;
	map<int,int>mp;
	for(int i=1;i<=n;i++)cin>>a[i];	
	for(int i=1;i<=n;i++)cin>>b[i],mp[b[i]]++;
	int q;
	cin>>m;
	for(int i=1;i<=m;i++)cin>>d[i];	
	if(!mp[d[m]]){
		cout<<"NO\n";
		return;
	}
	for(int i=1;i<=n;i++){
		if(a[i]==b[i])mp[b[i]]--;
	}
	for(int i=1;i<=m;i++){
		if(mp[d[i]])mp[d[i]]--;
	}
	for(auto d:mp){
		if(d.second){
			cout<<"NO\n";return;
		}
	}
	cout<<"YES\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
