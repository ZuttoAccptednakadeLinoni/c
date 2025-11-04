#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, x;
        cin >> m >> x;
        vector<pair<int, int> > items(m);
        int total_h = 0;
        for (int i = 0; i < m; ++i) {
            cin >> items[i].first >> items[i].second;
            total_h += items[i].second;
        }
        vector<ll> dp(total_h + 1, INF);
        dp[0] = 0;
        int current_max = 0;
        for (int i = 0; i < m; ++i) {
            int month = i + 1;
            ll available = (ll)x * (month - 1);
            int c = items[i].first;
            int h = items[i].second;
            if (c > available) continue;
            for (int j = current_max; j >= 0; --j) {
                if (dp[j] != INF && dp[j] + c <= available) {
                    if (dp[j + h] > dp[j] + c) {
                        dp[j + h] = dp[j] + c;
                        if (j + h > current_max) {
                            current_max = j + h;
                        }
                    }
                }
            }
        }
        int ans = 0;
        for (int j = current_max; j >= 0; --j) {
            if (dp[j] != INF) {
                ans = j;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
