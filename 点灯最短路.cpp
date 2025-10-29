#include<bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using i64 = long long;

using namespace std;


void solve()
{
    int t;
    cin >> t;
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    vector<int>cost(16);
    cost[1] = cost[2] = cost[4] = cost[8] = a[0];
    cost[3] = cost[12] = min(a[0] * 2, a[1]);
    cost[5] = cost[10] = min(a[0] * 2, a[2]);
    cost[6] = cost[9] = min(a[0] * 2, a[1] + a[2]);
    cost[7] = cost[11] = cost[13] = cost[14] = min({ a[0] * 3,a[0] + a[1],a[0] + a[2],a[0] + a[3] });
    cost[15] = min({ 4 * a[0],2 * a[1],2 * a[2],a[3] });
    
    vector<vector<pair<int,int>>>g(1 << 16);//no clear
    for (int i = 0; i < (1 << 16); i++) {
        for (int j = 1; j < 16; j++) {
            int to = 0;
            for (int k = 0; k < 16; k++) {
                if ((i >> k) & 1) {
                    to |= (1 << (k ^ j));
                }
            }
            if (to & (1 << 15) || (i >> 15) & 1 ) {//ocurr full
                to &= ((1 << 15) - 1);
                g[to].push_back(make_pair(cost[j], i));
            }
            /*if (to == 0 && i != (1<<15)) {
                g[1 << 16].push_back(make_pair(cost[j], i));
            }*/
        }
    }
    const int inf = INT_MAX / 2;
    priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    vector<int>dis(1 << 16, inf);
    //dis[1<<16] = 0;
    for (auto pr : g[0])
        q.push(pr);
    unordered_multiset<int>st;
    while(!q.empty()) {
        auto [d, p] = q.top();
        dis[p] = d;
        st.insert(p);
        for (auto [len, s] : g[p]) {
            q.push(make_pair(dis[p] + len, s));
        }
        while (!q.empty() && dis[q.top().second] != inf)
            q.pop();
    }

    while (t--) {
        int m;
        cin >> m;
        int getans = 0;
        for (int i = 0; i < m; i++) {
            string h, l;
            cin >> h >> l;
            int x = 8 * (h[0] - '0') + 4 * (h[1] - '0') + 2 * (l[0] - '0') + l[1] - '0';
            getans |= (1 << x);
        }
        cout << dis[getans] << endl;
    }
    return;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

        solve();
    return 0;
}
