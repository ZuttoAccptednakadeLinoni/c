#include <bits/stdc++.h>

using namespace std;

#define int long long
using i64 = long long;

typedef pair<int, int> PII;
typedef pair<int, char> PIC;
typedef pair<double, double> PDD;
typedef pair<int, PII> PIII;
typedef pair<int, pair<int, bool>> PIIB;

const int N = 1e5 + 10;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int mod1 = 954169327;
const int mod2 = 906097321;
const int INF = 0x3f3f3f3f3f3f3f3f;

int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};

void solve()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<char>> g(n + 2, vector<char>(m + 2));
	vector<vector<int>> flag(n + 2, vector<int>(m + 2));
	vector<vector<bool>> st(n + 2, vector<bool>(m + 2));
	vector<vector<int>> dist(n + 2, vector<int>(m + 2, INF));
	priority_queue<PIII, vector<PIII>, greater<PIII>> pq;
	int px, py;
	for (int i = 1; i <= k; i ++ )
	{
		int x, y;
		cin >> x >> y;
		flag[x][y] = k - i;
		if (i == 1)
		{
			px = x, py = y;
			dist[x][y] = 0;
			pq.push({0, {x, y}});
		}
	}
	for (int i = 1; i <= n; i ++ )
		for (int j = 1; j <= m; j ++ )
			cin >> g[i][j];
	while (pq.size())
	{
		auto t = pq.top();
		pq.pop();

		int dd = t.first, x = t.second.first, y = t.second.second;
		if (st[x][y]) continue;
		st[x][y] = true;

		for (int i = 0; i < 4; i ++ )
		{
			int nx = x + dx[i], ny = y + dy[i];
			if (nx <= 0 || nx > n || ny <= 0 || ny > m) continue;
			if (st[nx][ny] || g[nx][ny] == '#') continue;
			if (dist[nx][ny] > max(dd + 1, flag[nx][ny] + 1))
			{
				dist[nx][ny] = max(dd + 1, flag[nx][ny] + 1);
				pq.push({dist[nx][ny], {nx, ny}});
			}
		}
	}

	unsigned long long ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j <= m; j ++ )
		{
			if (dist[i][j] == INF) continue;
			ans = ans + dist[i][j] * dist[i][j];
			cout<<dist[i][j]<<" ";
		}
		cout<<endl;
	}
	cout << ans << '\n';
}

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}
}

