//
// Created by k0itoYuu on 2025/8/14.
//
#include<bits/stdc++.h>
using namespace std;
int T = 1,n,m,x,y;bool f1,f2;
void solve() {
    cin >> n >> m;
    if (gcd(m,n) != 1) {
        cout << "NO";
        return;
    }else cout<<"YES\n";
    vector<vector<int>> ans(n,vector<int>(m,0));
    ans[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j == m) break;
            if (f2) {
                ans[x][(y + ans[x][y] % m) % m] = ans[x][y] + 1;
                y = (y + ans[x][y] % m) % m;
            }
            else {
                ans[x][(y + m - ans[x][y] % m) % m] = ans[x][y] + 1;
                y =(y + m - ans[x][y] % m) % m;
            }
            f2 ^= 1;
        }
        if (i == n) break;
        if (f1) {
            ans[(x + ans[x][y] % n) % n][y] = ans[x][y] + 1;
            x = (x + ans[x][y] % n) % n;
        }
        else {
            ans[(x + n - ans[x][y] % n) % n][y] = ans[x][y] + 1;
            x = (x + n - ans[x][y] % n) % n;
        }
        f1 ^= 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    //cin >> T;
    while (T--) solve();
    return 0;
}