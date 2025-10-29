#include<bits/stdc++.h>
using namespace std;
int vis[200005],d[200005];
vector<int> to[200005];
void solve(){
	int n,u,v;
	cin>>n;
	int maxx=0,ans=0;
	for(int i=1;i<=n;i++)vis[i]=0,to[i].clear(),d[i]=0;
	for(int i=1;i<n;i++){
		cin>>u>>v;
		to[u].push_back(v);
		to[v].push_back(u);
		d[u]++,d[v]++;
	}
	vector<int>m;
	for(int i=1;i<=n;i++){
		if(d[i]>maxx)maxx=d[i];
	}
	for(int  i=1;i<=n;i++){
		if(d[i]==maxx){
			m.push_back(i);
			vis[i]=1; 
		}
	}
	int id=0;
	for(auto x:m){
		int tmp=0;
		for(auto y:to[x])tmp+=vis[y];
		if(tmp<=1){
			id=x;
			break;
		}
	}
	ans+=d[id];
	for(auto y:to[id])d[y]--;
	d[id]=0;
	maxx=0;
	for(int i=1;i<=n;i++){
		if(d[i]>maxx)maxx=d[i],id=i;
	}
	ans+=d[id];
	cout<<ans-1<<endl;
}

int main(){
	int n;
	cin>>n;
	while(n--)solve();
}
