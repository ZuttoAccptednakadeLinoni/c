#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
vector<pp>ve[100005];
stack<int>an;
vector<int>vec;
int vis[100005];
int pre[100005];
int find(int x){
	if(x==pre[x])return x;
	return pre[x]=find(pre[x]);
}
void dfs(int u,int mb,int ff){
//	cout<<u<<"! !"<<mb<<endl;
	if(u==mb&&ff){
		while(!an.empty()){
			int q=an.top();
//			cout<<q<<" ";
			an.pop();
			vec.push_back(q);
		}
		ff=0;
		return;
	}
	for(auto v:ve[u]){
//		cout<<v.first<<" ";
		if(!vis[v.first]){
			vis[v.first]=1;
			an.push(v.second);
			dfs(v.first,mb,ff);
			if(!an.empty())an.pop();
		}
		
	}
//	cout<<endl;
}
void solve(){
	int n,m;
	cin>>n>>m;
	vec.clear();
	for(int i=0;i<=n;i++){
		ve[i].clear();
		vis[i]=0;
		pre[i]=i; 
	}
	map<int,int>mp;
	int f=1;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		
		
//		cout<<mp[u]<< mp[v]<<endl;
		if((find(u)==find(v))&&f){
			vis[u]=1;
			dfs(u,v,1);
			f=0;
			vec.push_back(i+1);
		}
		pre[find(u)]=find(v);
		ve[v].push_back({u,i+1});
		ve[u].push_back({v,i+1});
	}
	if(vec.size()==0)cout<<-1;
	else {
		sort(vec.begin(),vec.end());
		cout<<vec[0];
		for(int i=1;i<vec.size();i++){
			cout<<" "<<vec[i];
		}
	}
	cout<<endl;
}
/*
1
6 8
1 2
2 3
5 6
3 4
2 5
5 4
5 1
4 2*/
int main(){
std::ios::sync_with_stdio(false);
std::cin.tie(0); 
std::cout.tie(0);
	int t;
	cin>>t;
	while(t--)solve();
}
