#include<iostream>
#include<cstring>
using namespace std;
 
const int N = 1005;
int g[N][N], w[N][N];
int n, m, s, d;
int dist[N], mon[N];
bool st[N];
 
bool check(int t, int j) {
	if(dist[t] != dist[j]) return dist[t] > dist[j];
	return mon[t] > mon[j];
}
 
void dijkstra() {
	memset(dist, 0x3f, sizeof dist);
	memset(mon, 0x3f, sizeof mon);
	memset(st, 0, sizeof st);
	dist[s] = 0;
	mon[s] = 0;
 
	for(int i = 0; i < n; ++ i) {
		int t = -1;
		for(int j = 0; j <= n-1; ++ j) {
			if(st[j]) continue;
			if(t == -1 || check(t, j))
				t = j;
		}
		st[t] = true; 
		for(int j = 0; j <= n-1; ++ j) {
			if(dist[t] + g[t][j] < dist[j]) {
				dist[j] = dist[t] + g[t][j];
				mon[j] = mon[t] + w[t][j];
			} else if(dist[t]+g[t][j] == dist[j]) {
				mon[j] = min(mon[j], mon[t] + w[t][j]);
			}
		}
	}
}
 
void solve(){
	cin >> n >> m >> s >> d;
	memset(g, 0x3f, sizeof g);
	memset(w, 0x3f, sizeof w);
	while(m --) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		g[a][b] = g[b][a] = min(g[a][b], c);
		w[a][b] = w[b][a] = min(w[a][b], d);
	}
	dijkstra();
	cout << dist[d] << ' ' << mon[d]<<endl;
	return ;
}
int main() {
	int t;
	cin>>t;
	while(t--)solve(); 

}
