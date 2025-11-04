#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<int>g[N];
int dep[N],f[N];
void dfs(int u,int fa){
	f[u]=fa;dep[u]=dep[fa]+1;
	for(int v:g[u]){
		if(v^fa){
			dfs(v,u);
		}else continue;
	}
}
void solve(){
	int n,a,b,u,v;
	cin>>n>>a>>b;
	for (int i=1; i<=n; i++){
		g[i].clear();
	}
	for(int i=1;i<n;i++){
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(a,0);
	int ans=0,cnt=0;
	for(int i=1;i<=n;i++){
		if(dep[b]==i)break;
		if(dep[b]-1>i)b=f[b],cnt++;
		else{
			b=f[b],cnt++;
			break;
		}
	}
	dfs(b,0);
	for(int i=1;i<=n;i++){
		ans=max(ans,dep[i]);
	}
	cout<<(n-1)*2-ans+1+cnt<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
