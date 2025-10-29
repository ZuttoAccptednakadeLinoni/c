#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n,p,W[101][101],x,y;bool f;
struct node {
    int c = 0,U = 0,rd = 0;
} a[101];
vector<vector<int> > g;
int main() {
    cin >> n >> p;
    g.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].c >> a[i].U;
    }
    for (int i = 0; i < p; i++) {
        cin >> x >> y >> W[x][y];
        g[x].push_back(y);
        a[y].rd++;
    }
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (!a[i].rd) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        int t = q.front(); q.pop();
        for (int i = 0; i <= g[t].size(); i++) {
            a[g[t][i]].rd -= 1;
            if (a[t].c) {
                a[g[t][i]].c += a[t].c * W[t][g[t][i]];
            }
            if (!a[g[t][i]].rd) {
                q.push(g[t][i]);
                a[g[t][i]].c -= a[g[t][i]].U;
            }
        }
    }
    for(int i=1;i<=n;i++){
    	cout << i << ' ' << a[i].c<< '\n';
	}
    if (!f) cout << "NULL";
    return 0;
}
