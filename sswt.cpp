#include<bits/stdc++.h>
#define For(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,a,b) for(i=a;i>=b;i--)
using namespace std;
const int N = 5e5 + 10;
int n;
vector<int> p[N];
void add(int u, int v) {
	p[u].push_back(v);
}
bool vis[N];
stack<int> ans;
void dfs(int x) {
	for (auto u : p[x]) {
		if (vis[u]) continue;
		dfs(u);
	}
	vis[x] = 1;
	ans.push(x);
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int i;
	cin >> n;
	For(i, 1, n) {
		int x;
		while (cin >> x && x) {
			add(i, x);
		}
	}
	For(i, 1, n) {
		if (!vis[i])
			dfs(i);
	}
	while (ans.size()) {
		cout << ans.top() << ' ';
		ans.pop();
	}
}
