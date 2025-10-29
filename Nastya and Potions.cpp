//
// Created by k0itoYuu on 2025/6/27.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
int p[200005];
int c[200005];
int ans[200005];
vector<int>v[200005];
bool vis[200005];


void dfs(int i){
    int sum=0;
    for (auto a:v[i]){
        if (!vis[a]){
            vis[a]=1;
            dfs(a);
        }
        sum+=ans[a];
    }
    if (!v[i].empty())ans[i]=min(sum,ans[i]);
}
void solve(){
    int n,k;
    cin>>n>>k;
    for (int i=1;i<=n;i++){
        cin>>ans[i];
        vis[i]=0;
        c[i]=0;
        v[i].clear();
    }
    for (int i=1;i<=k;i++){
        int q;
        cin>>q;
        ans[q]=0;
    }
    for (int i=1;i<=n;i++){
        int m;
        cin>>m;
        for (int j=0;j<m;j++){
            int q;
            cin>>q;
            c[q]++;
            v[i].push_back(q);
        }
    }
    for (int i=1;i<=n;i++){
        if (c[i]==0){
            vis[i]=1;
            dfs(i);
        }
    }
    for (int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}


signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}