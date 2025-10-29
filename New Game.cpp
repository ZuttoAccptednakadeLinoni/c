#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int T;
int n, k, a[N], cnt;
int main() {
    cin >> T;
    while (T --) {
        cin >> n >> k;
        for (int i = 1; i <= n; i ++) cin >> a[i];
        sort (a + 1, a + n + 1);
        int l = 1, r = 2;
        cnt = 1;
        map<int, int> b;
        b[a[1]] ++;
        int len = 1;
        while (r <= n) {
            len = max(len, r - l);
            if (a[r] - a[r - 1] > 1) {
                cnt = 1;
                while (l < r) b[a[l]] --, l ++;
                b[a[r]] ++;
                r ++;
                continue;
            }
            b[a[r]] ++;
            if (b[a[r]] == 1) {
                while (cnt == k) {
                    b[a[l]] --;
                    if (b[a[l]] == 0) cnt --;
                    l ++;
                }
                cnt ++;
            }
            r ++;
        }
        len = max(len, r - l);
        cout << len << endl;
    }
    return 0;
}
