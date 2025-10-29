//
// Created by k0itoYuu on 2025/8/21.
//
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int k = t.size();
        vector<char> ans(n, '0');

        vector<int> pre(n+1);
        pre[0] = 0;
        map<int, vector<int>> pos;
        pos[0].push_back(0);

        for (int i=1; i<=n; i++) {
            if (s[i-1] == '0') {
                pre[i] = pre[i-1] + 1;
            } else {
                pre[i] = pre[i-1] - 1;
            }
            pos[pre[i]].push_back(i);
        }

        int cur = 0;
        bool valid = true;
        for (int i=0; i<k-1; i++) {
            int x = pre[cur];
            int target;
            if (t[i] == '0') {
                target = x+1;
            } else {
                target = x-1;
            }

            if (pos.find(target) == pos.end()) {
                valid = false;
                break;
            }

            vector<int>& vec = pos[target];
            auto it = lower_bound(vec.begin(), vec.end(), cur+1);
            if (it == vec.end()) {
                valid = false;
                break;
            }
            int p = *it;
            int j = p - 1;
            if (j > n-2) {
                valid = false;
                break;
            }
            ans[j] = '1';
            cur = j+1;
        }

        if (!valid) {
            cout << "No\n";
            continue;
        }

        int diff = pre[n] - pre[cur];
        if (t[k-1] == '0' && diff > 0) {
            ans[n-1] = '1';
            cout << "Yes\n";
            for (char c : ans) cout << c;
            cout << "\n";
        } else if (t[k-1] == '1' && diff < 0) {
            ans[n-1] = '1';
            cout << "Yes\n";
            for (char c : ans) cout << c;
            cout << "\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
/*
3
1001
0
111
1
011011010011101
110111
*/
