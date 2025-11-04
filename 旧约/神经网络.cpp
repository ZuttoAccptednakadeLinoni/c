#include<bits/stdc++.h>
using namespace std;
vector<int> a[105];
int in[105],out[105];
int c[105],e[105],adj[105][105];
bool b[105];
int main() {
	int n,p,q,j,f=0;
	cin>>n>>p;
	for(int i=1; i<=n; i++) {
		cin>>c[i]>>e[i];
	}
	for(int i=0; i<p; i++) {
		cin>>q>>j;
		a[q].push_back(j);
		cin>>adj[q][j];
		in[j]++;
		out[q]++;
	}
	queue<int>s;
	for(int i=1; i<=n&&!b[i]; i++) {
		if(in[i]==0)s.push(i);
		while(!s.empty()) {
			int u=s.front();
			s.pop();
			for(auto v:a[u]) {
				if(c[u]>0)c[v]+=adj[u][v]*c[u];
				if(--in[v]==0) {
					s.push(v);
					b[v]++;
					c[v]-=e[v];
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(out[i]==0&&c[i]>0){
			cout<<i<<" "<<c[i]<<endl;
			f=1;
		}
		
	}
	if(f==0)cout<<"NULL\n";
}
