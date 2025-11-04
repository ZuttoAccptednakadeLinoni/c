//
// Created by k0itoYuu on 2025/9/18.
//
#include <bits/stdc++.h>

using namespace std;

#define cctie ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define all(x) x.begin(), x.end()

using i64 = long long;

void solve() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<int> a, b;
    for (auto c : s) a.push_back((c == '#'));
    for (auto c : t) b.push_back((c == '#'));
    int suma = accumulate(all(a), 0), sumb = accumulate(all(b), 0);
    if (suma == 0 || sumb == 0) {
        cout << "Yes\n";
        cout << s << '\n';
        for (int i = 0; i < 5; i++) {
            string res(n, '.');
            if (sumb == 0 && suma > 0 && i == 0) {
                for (int j = 0; j < n; j++) {
                    if (a[j] == 0) res[j] = '#';
                }
            }
            if (suma == 0 && sumb > 0 && i == 4) {
                for (int j = 0; j < n; j++) {
                    if (b[j] == 0) res[j] == '#';
                }
            }
            cout << res << '\n';
        }
        cout << t << '\n';
        return;
    }
    if ((suma == n) + (sumb == n) == 2) {
        cout << "Yes\n";
        for (int i = 0; i < 7; i++) {
            cout << string(n, '#') << '\n';
        }
        return;
    }
    if ((suma == n) + (sumb == n) == 1) {
        cout << "No\n";
        return;
    }
    if ((suma == n - 2) && (sumb == n - 2)) {
        int p1 = -1, p2 = -1;
        for (int i = 1; i < n; i++) {
            if (a[i] == 0 && a[i - 1] == 0) p1 = i - 1;
            if (b[i] == 0 && b[i - 1] == 0) p2 = i - 1;
        }
        if (p1 == -1 || p2 == -1 || abs(p1 - p2) > 1);
        else {
            vector<vector<int>> g(7, vector<int>(n));
            g[0] = a, g[6] = b;
            if (p1 == p2) {
                for (int i = 1; i < 6; i++) g[i][p1] = g[i][p1 + 1] = 1;
            }
            else if (p1 > p2) {
                g[1][p1] = g[1][p1 + 1] = g[5][p2] = g[5][p2 + 1] = 1;
                g[2][p2] = g[3][p1] = g[4][p1 + 1] = 1;
            }
            else {
                g[1][p1] = g[1][p1 + 1] = g[5][p2] = g[5][p2 + 1] = 1;
                g[4][p1] = g[3][p2] = g[2][p2 + 1] = 1;
            }
            cout << "Yes\n";
            for (auto v : g) {
                for (auto x : v) cout << (x ? '#' : '.'); cout << '\n';
            }
            return;
        }
    }
    vector<vector<int>> g(7, vector<int>(n));
    g[0] = a, g[6] = b;
    for (int i = 0; i < n; i++) {
        if (i % 2) g[2][i] = g[4][i] = 1;
        else g[3][i] = 1;
    }
    vector<int> f1(n), f2(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            if (i == 0 || a[i - 1] == 0) cnt++;
            f1[i] = cnt;
        }
    }
    vector<bool> g1(cnt + 1);
    cnt = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) {
            if (i == 0 || b[i - 1] == 0) cnt++;
            f2[i] = cnt;
        }
    }
    vector<bool> g2(cnt + 1);
    for (int i = 1; i + 2 < n; i++) {
        if (a[i - 1] == 1 && a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 1) {
            g[1][i] = g[1][i + 1] = 1;
            g[2][i] = g[2][i + 1] = 0;
            g1[f1[i - 1]] = g1[f1[i + 2]] = 1;
            break;
        }
    }
    for (int i = 1; i + 2 < n; i++) {
        if (b[i - 1] == 1 && b[i] == 0 && b[i + 1] == 0 && b[i + 2] == 1 && max(g[2][i], g[2][i + 1]) == 1) {
            g[5][i] = g[5][i + 1] = 1;
            g[4][i] = g[4][i + 1] = 0;
            g2[f2[i - 1]] = g2[f2[i + 2]] = 1;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            if (i > 1 && i + 1 < n && a[i - 2] == 1 && a[i - 1] == 0 && a[i] == 0 && a[i + 1] == 1 && g[1][i - 1] == 1);
            else if (i > 0 && a[i - 1] == 1 && g1[f1[i - 1]] == 0) {
                g[1][i] = 1;
                g1[f1[i - 1]] = 1;
                if (i + 1 < n && a[i + 1] == 1) g1[f1[i + 1]] = 1;
            }
            else if (i + 1 < n && a[i + 1] == 1 && g1[f1[i + 1]] == 0) {
                g[1][i] = 1;
                g1[f1[i + 1]] = 1;
            }
        }
        if (b[i] == 0) {
            if (i > 1 && i + 1 < n && b[i - 2] == 1 && b[i - 1] == 0 && b[i] == 0 && b[i + 1] == 1 && g[5][i - 1] == 1);
            else if (i > 0 && b[i - 1] == 1 && g2[f2[i - 1]] == 0) {
                g[5][i] = 1;
                g2[f2[i - 1]] = 1;
                if (i + 1 < n && b[i + 1] == 1) g2[f2[i + 1]] = 1;
            }
            else if (i + 1 < n && b[i + 1] == 1 && g2[f2[i + 1]] == 0) {
                g[5][i] = 1;
                g2[f2[i + 1]] = 1;
            }
        }
    }
    cout << "Yes\n";
    for (auto v : g) {
        for (auto x : v) cout << (x ? '#' : '.'); cout << '\n';
    }
}

int main() {
    cctie;

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}

/*
4
4
#..#
.##.
5
##.#.
.#.##
6
######
.####.
27
.######.######.####.#.#####
.####...####..#.......#####

1
8
###..#..
...#.###
*/