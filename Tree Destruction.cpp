//
// Created by k0itoYuu on 2025/8/21.
//
#include<bits/stdc++.h>
using namespace std;
vector<int>ve[200005];
int vis[200005];
int dp[200005];
int ans=1;
void dfs(int u){
    vis[u]=1;
    if(ve[u].size()==1){
        dp[u]=1;
        return;
    }
    int ma=0,mx=0;
    for(auto v:ve[u]){
        if(!vis[v])dfs(v);
        else continue;
        if(dp[v]>ma){
            mx=ma;
            ma=dp[v];
        }else if(dp[v]>mx){
            mx=dp[v];
        }
        int t=ve[u].size();
        dp[u]=max(max(dp[v]+t-2,dp[u]),t);
        //cout<<"u"<<u<<"v"<<v<<dp[u]<<endl;

        ans=max(dp[u],max(ans,t+ma+mx-4));
    }
}
void solve(){
    int n;
    cin>>n;
    ans=1;
    for(int i=1;i<=n;i++){
        ve[i].clear();
        dp[i]=0;
        vis[i]=0;
    }
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        if(ve[i].size()!=1){
            dfs(i);
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}