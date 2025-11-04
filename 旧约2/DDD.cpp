//
// Created by k0itoYuu on 2025/5/19.
//
#include<bits/stdc++.h>
using namespace std;
struct edge {
	int v,w;
};
vector<edge>v[200005];

int vis[200005];
int dis[200005][2];
struct node {
    int mx, u;

    bool operator>(const node& a) const {
        return mx> a.mx;
    }
};
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int sum=0;
    int mm=INT_MAX;
    for (int i=0;i<=n;i++)v[i].clear();
    for (int i=0;i<k;i++){
        int q;

        cin>>q;if (q%2==1)mm=min(q,mm);
        sum+=q;
    }
    for(int i=0; i<m; i++) {
        int u,vv;
        cin>>u>>vv;
        v[u].push_back({vv,1});
        v[vv].push_back({u,1});
        //if((u==1&&vv==n)||(u==n&&vv==1))ans=w;
    }
    for(int i=1; i<=n; i++) {
        dis[i][0]=INT_MAX;
        dis[i][1]=INT_MAX;
        vis[i]=0;
        //disn[i]=INT_MAX;
    }
    dis[1][0]=0;
    //dis[1]=0;
    queue<node> q;
    q.push({0,1});
    while(!q.empty()) {
        int u=q.front().u;
        int w=q.front().mx;
        //cout<<u<<" "<<w<<endl;
        q.pop();
        // for (auto ed : v[u]) {
        //     int vv = ed.v, ww = ed.w;
        //     if (dis[ed.v][!w] > dis[u][w] + 1) {
        //         dis[ed.v][!w] = dis[u][w] + 1;
        //         q.push({!w,ed.v });
        //     }
        // }
        for (auto ed:v[u]){
            int vv = ed.v, ww = ed.w;
            int l=w+ww;
            //cout<<u<<vv<<l<<endl;
            if (dis[ed.v][l%2]>l){
                dis[ed.v][l%2]=l;
                q.push({l, vv});
            }
        }
    }
    //cout<<1;
    //cout<<mm<<endl;
    cout<<1;
    for (int i=2;i<=n;i++){

        //cout<<dis[i][0]<<" "<<dis[i][1]<<endl;
        int f=0;
        for (int j=0;j<2;j++){
            int qq=sum;
            if ((dis[i][j]%2)!=(qq%2))qq-=mm;
            if (dis[i][j]<=qq)f=1;
        }
        cout<<f;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}
/*
1

5 5
5

1 1 1 1 1

1 2

1 3

2 5
5 4
4 3
 */