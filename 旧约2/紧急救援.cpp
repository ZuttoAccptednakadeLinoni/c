#include<bits/stdc++.h>
using namespace std;
int vis[505];
int f[505],mam[505];
vectar<nd>arr[505];
struct nd{
	int next,l;
};
int brr[505];
priority_queue<nd>q;
int main(){
	int n,m,s,d;
	cin>>n>>m>>s>>d;
	for(int i=0;i<n;i++){
		cin>>brr[i];
	}
	int x,y,l;
	for(int i=0;i<m;i++){
		cin>>x>>y>>l;
		arr[x].push_back({y,l});
		arr[y].push_back({x,l});
	}
	q.push({s,0});
	for(int i=0;i<n;i++){
		vis[i]=0;
		f[i]=INT_MAX;
	}
	while(!q.empty()){
		auto now=q.top()
		int u=now.next;
		q.pop();
		if(vis[u])continue;
		vis[u]=1;
		for(auto v:arr[u]){
			int vv=v.next;
			if(f[u]+now.l<f[vv]){
				f[vv]=f[u]+now.l;
				q.push{v,[f[vv]]};
			}
		}
	}
} 
