#include <bits/stdc++.h>

#include <type_traits>

using i64 = long long;

constexpr i64 inf = 1E14;

void solve() {
    int n, m, h;
    std::cin >> n >> m >> h;
    std::vector<bool> a(n);
    for (int i = 0; i < h; i++) {
        int v;
        std::cin >> v;
        a[v - 1] = true;
    }
    std::vector<std::vector<std::pair<int, i64>>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        std::cin >> u >> v >> w;
        u--, v--;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    auto bfs = [&](int u) -> std::vector<std::vector<i64>> {
        struct Node {
            int vtx;
            i64 time;
            bool horse = false;
            bool operator<(const Node &node) const { return time > node.time; }
            bool operator>(const Node &node) const { return time < node.time; }
        };
        std::vector d(2, std::vector<i64>(n, inf));
        d[0][u] = 0;
        std::priority_queue<Node, std::vector<Node>, std::greater<Node>> pq;
        pq.emplace(u, 0, 0);
        std::vector vis(2, std::vector<bool>(n));
        while (!pq.empty()) {
            Node pre = pq.top();
            pq.pop();
            bool have_horse = pre.horse || a[pre.vtx];
            if (vis[have_horse][pre.vtx]) {
                continue;
            }
            vis[have_horse][pre.vtx] = true;
            for (const auto &[v, w] : adj[pre.vtx]) {
                i64 ext_time = have_horse ? w / 2 : w;
                if (d[pre.horse][pre.vtx] + ext_time < d[have_horse][v]) {
                    d[have_horse][v] = d[pre.horse][pre.vtx] + ext_time;
                    pq.emplace(v, d[have_horse][v], have_horse);
                }
            }
        }
        return d;
    };

    auto d1 = bfs(0);
    auto d2 = bfs(n - 1);
    i64 ans = inf;
    for (int i = 0; i < n; i++) {
        ans = std::min(ans, std::max(std::min(d1[0][i], d1[1][i]),
                                     std::min(d2[0][i], d2[1][i])));
    }
    if (ans == inf) {
        ans = -1;
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}