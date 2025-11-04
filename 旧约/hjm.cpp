#include <bits/stdc++.h>
 #define inf 0x3f3f3f3f
 using namespace std;
 constexpr int N = 503;
 int n, m, ans;
 int maps[N][N];
 int dx[] = {0, 0, -1, 1, 1, 1, -1, -1};
 int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
 int cal[N][N];
 bool check[N][N];
 bool vis[N][N], vis1[N][N];
 struct pair_hash
 {
 template <class T1, class T2>
 size_t operator() (const pair<T1, T2> &pair) const
 {
 return hash<T1>()(pair.first) ^ hash<T2>()(pair.second);
 }
 };
unordered_map<pair<int, int>, pair<int, int>, pair_hash> from;
 struct point {
    int x, y, times;
    pair<int, int> s;
    bool operator<(const point &a) const {
        return times > a.times;
    }
 };
 queue<pair<int, int>> q;
 priority_queue<point> p;
 inline bool checks(pair<int, int> a, pair<int, int> b) {
    if (b.first == 1) {
        if (a.first != 1 && a.second != m)
            return check[a.first][a.second];
        else
            return false;
    } else if (b.first == n) {
        if (a.first != n && a.second != 1)
            return check[a.first][a.second];
        else
            return false;
    } else if (b.second == 1) {
        if (a.second != 1 && a.first != n)
            return check[a.first][a.second];
        else
            return false;
    } else if (b.second == m) {
        if (a.second != m && a.first != 1)
            return check[a.first][a.second];
        else
            return false;
    }
    return false;
 }
 void bfs1() {
    q.push({1, 1});
    while (!q.empty()) {
        int a = q.front().first, b = q.front().second;
        q.pop();
        if (a == n && b == m) {
            ans = -1;
            return;
        }
        if (vis1[a][b]) continue;
        vis1[a][b] = 1;
        for (int i = 0; i < 4; i++) {
            int x = a + dx[i], y = b + dy[i];
            if (x < 1 || y < 1 || x > n || y > m || vis1[x][y] || maps[x][y] == 
0) continue;
            q.push({x, y});
        }
    }
 }
 void bfs2() {
    while (!p.empty()) {
        int a = p.top().x, b = p.top().y, times = p.top().times;
        pair<int, int> temp = p.top().s;
        p.pop();
        from[{a, b}] = temp;
        cal[a][b] = min(cal[a][b], times);
        if ((a != temp.first || b != temp.second) && checks({a, b}, temp)) {
            ans = min(ans, times);
            return;
        }
        if (vis[a][b]) continue;
        vis[a][b] = 1;
        for (int i = 0; i < 8; i++) {
            int x = a + dx[i], y = b + dy[i];
            if (x < 1 || y < 1 || x > n || y > m || maps[x][y] == 1) continue;
            if (vis[x][y]) {
                if (checks(from[{a, b}], from[{x, y}])) ans = min(ans, times + 
cal[x][y]);
                continue;
            }
            p.push({x, y, times + 1, temp});
        }
    }
 }
 void solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        check[i][1] = check[i][m] = 1;
    for (int i = 1; i <= m; i++)
        check[1][i] = check[n][i] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> maps[i][j], cal[i][j] = inf;
    bfs1();
    if (ans == -1) {
        cout << ans << '\n';
        return ;
    }
    ans = inf;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (i != n && j != 1 ) continue;
            if (maps[i][j] == 0)
                p.push({i, j, 1, {i, j}});
        }
    bfs2();
    cout << ans << '\n';
    return;
 }
 int main(){
int T = 1;
 //cin >> T;
 while (T --)
 solve();
 return 0; 
}
