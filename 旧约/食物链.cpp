#include<bits/stdc++.h>
using namespace std;
int fa[150000],ans;
int find(int u) {
	return fa[u] == u ? u : fa[u] = find(fa[u]);
}
int main() {
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n*3; i++)fa[i]=i;
	for(int i=0; i<m; i++) {
		int op,u,v;
		cin>>op>>u>>v;
		if(u>n||v>n) {
			ans++;
			continue;
		}
		if(op==1) {
			if(find(u+n)==find(v)||find(u)==find(v+n))ans++;
			else {
				cout<<endl;
				fa[find(u)]=find(v);
				fa[find(u+n)]=find(v+n);
				fa[find(u+n+n)]=find(v+n+n);
				for(int i=1; i<=n*3; i++)cout<<fa[i]<<" ";
				cout<<endl;
			}
		} else {
			if(find(u)==find(v)||find(u)==find(v+n))ans++;
			else {
				
				cout<<endl;
				fa[find(u + n)] = find(v);
				fa[find(u + n + n)] = find(v + n);
				fa[find(u)] = find(v + n + n);
				for(int i=1; i<=n*3; i++)cout<<fa[i]<<" ";
				cout<<endl;
			}
		}
	}
	cout<<ans;
}
/* 
4 5
1 1 3
2 2 4
2 3 2
1 1 4
2 2 1
*/
