#include<bits/stdc++.h>
using namespace std;
long long n,m,tmp,ans,cnt;
queue<long long> q;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        while (!q.empty() && tmp > m) {
            m += q.front();
            q.pop();
            cnt -= 1;
        }
        if (m >= tmp) {
            q.push(tmp);
            m -= tmp;
            cnt += 1;
            if (cnt > ans) ans = cnt;
        }
    }
    cout << ans;
    return 0;
}
