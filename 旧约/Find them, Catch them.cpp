#include<iostream>
using namespace std;
int fa[200005],n,s[100000],b[100000];

int find(int u) {
	return fa[u] == u ? u : fa[u] = find(fa[u]);
}

void solve() {
	int m,u,v;
	char op;
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n*2; i++) {
		fa[i]=i;
	}
	for(int i=0; i<m; i++) {
		scanf("%s%d%d",&op,&u,&v);
		if(op=='D') {
			fa[find(u + n)] = find(v);
			fa[find(u )] = find(v + n);


		} else {
			int dx=find(u);
			int dy=find(v);
			if(find(u)==find(v)) {
				printf("In the same gang.\n");
			} else if(find(u)==find(v+n)) {
				printf("In different gangs.\n");
			} else {
				printf("Not sure yet.\n");
			}
		}
	}
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		solve();
	}
}
/*1
9 6
D 1 2
D 2 3
D 3 4
D 4 5
D 8 2
D 9 1
*/
