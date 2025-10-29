#include<bits/stdc++.h>
using namespace std;
vector <int>g[123456];
bool vis[123456];
int ans,n,d;
void dfs(int now,int dis){
	vis[now]=1;
	if(dis==d)return;
	for(int i=0;i<g[now].size();i++){
		if(!vis[g[now][i]]){
			dfs(g[now][i],dis+1);
			ans++;
		}
	}
}
int main(){
	cin>>n>>d;
	for(int i=1;i<n;i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	dfs(1,0);
	cout<<ans;
	return 0;
}
