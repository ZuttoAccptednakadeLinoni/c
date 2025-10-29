//
// Created by k0itoYuu on 2025/5/25.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> obstacles(n);
    for (int i = 0; i < n; ++i) {
        cin >> obstacles[i].first >> obstacles[i].second;
    }

    vector<int> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }

    vector<int> low(n + 1), high(n + 1);
    low[0] = high[0] = 0;

    for (int i = 1; i <= n; ++i) {
        int li = obstacles[i-1].first;
        int ri = obstacles[i-1].second;
        int di = d[i-1];
        int prev_low = low[i-1];
        int prev_high = high[i-1];

        if (di == 0 || di == 1) {
            int curr_low = prev_low + di;
            int curr_high = prev_high + di;
            int new_low = max(li, curr_low);
            int new_high = min(ri, curr_high);
            if (new_low > new_high) {
                cout << "NO" << endl;
                return 0;
            }
            low[i] = new_low;
            high[i] = new_high;
        } else {
            int curr_low = prev_low;
            int curr_high = prev_high + 1;
            int new_low = max(li, curr_low);
            int new_high = min(ri, curr_high);
            if (new_low > new_high) {
                cout << "NO" << endl;
                return 0;
            }
            low[i] = new_low;
            high[i] = new_high;
        }
    }

    vector<int> res = d;
    int h_current = high[n];

    for (int i = n - 1; i >= 0; --i) {
        int di = res[i];
        if (di == 0 || di == 1) {
            int h_prev = h_current - di;
            if (h_prev < low[i] || h_prev > high[i]) {
                cout << "NO" << endl;
                return 0;
            }
            h_current = h_prev;
        } else {
            int h_prev_candidate = h_current;
            if (h_prev_candidate >= low[i] && h_prev_candidate <= high[i]) {
                res[i] = 0;
                h_current = h_prev_candidate;
            } else {
                h_prev_candidate = h_current - 1;
                if (h_prev_candidate >= low[i] && h_prev_candidate <= high[i]) {
                    res[i] = 1;
                    h_current = h_prev_candidate;
                } else {
                    cout << "-1" << endl;
                    return 0;
                }
            }
        }
    }

    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}