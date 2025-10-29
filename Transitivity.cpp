//
// Created by k0itoYuu on 2025/5/11.
//
#include<bits/stdc++.h>
#define int long long
#define pp pair<int,int>
using namespace std;
bool vis[1000005];
vector<int>arr[1000005];
int q=0,b=0;
void bfs(int i){
    vis[i]=1;
    q++;
    b+=arr[i].size();
    for (auto u:arr[i]){
        if (!vis[u])bfs(u);
    }
}

signed main(){
    int n,m;
    cin>>n>>m;
    for (int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    //cout<<n*(n-1)/2-m<<endl;
    int ans=0;
    vector<pp>qe;
    for (int i=1;i<=n;i++){
        b=0;
        q=0;
        //vis[i]=1;
        if (!vis[i])bfs(i);
        //cout<<q<<" "<<b<<endl;
        if (q)qe.push_back({q,b});
        ans+=q*(q-1)/2-b/2;
    }
    if (!ans){
        sort(qe.begin(),qe.end());
        //cout<<qe[0].first<<qe[1].first<<endl;
        ans+=qe[0].first*qe[1].first;
    }
    cout<<ans<<endl;
}