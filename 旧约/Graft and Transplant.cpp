#include<bits/stdc++.h>
using namespace std;

constexpr int N = 10000 + 10;

int n, c, d[N];
vector<int> E[N];

void dfs(int u, int fa) {
  for (int v : E[u]) {
    if (v == fa) continue;
    d[v] = d[u] + 1;
    if (d[v] > d[c]) c = v;
    dfs(v, u);
  }
}

int main() {
  scanf("%d", &n);
  for (int i = 1; i < n; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    E[u].push_back(v), E[v].push_back(u);
  }
  int ans=0,max=0;
  for(int i=1;i<=n;i++){
  	if(E[i].size()>1)ans++;
  }
  if((ans-1)%2==1)cout<<"Alice";
  else cout<<"Bob";
  return 0;
}
