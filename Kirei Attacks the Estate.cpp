//
// Created by k0itoYuu on 2025/5/27.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
bool vi[200005];
vector<int>v[200005];
int mm[200005];
int ans[200005];
int vis[200005];
void dpp(int u){

    vis[u]=1;
    for (auto vv:v[u]){
        if (vis[vv])continue;
        //cout<<arr[vv]-ans[u]<<endl;
        mm[vv]=min(arr[vv]-ans[u],arr[vv]);
        //cout<<vv<<mm[vv]<<"!"<<endl;
        ans[vv]=max(arr[vv],arr[vv]-mm[u]);
        dpp(vv);

        //cout<<u<<"!"<<dp[u]<<" ";
    }
}
void solve(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        mm[i]=0;
        ans[i]=0;
        vis[i]=0;
        v[i].clear();
    }
    for (int i=1;i<n;i++){
        int u,vv;
        cin>>u>>vv;
        vi[vv]=1;
        v[u].push_back(vv);
        v[vv].push_back(u);
    }

    ans[1]=arr[1];
    dpp(1);
    //cout<<endl;

    //cout<<endl;
    for (int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}


signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}