//
// Created by k0itoYuu on 2025/11/3.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
vector<int>v[200005];
int dp[200005];
int vis[200005];
void dfs(int u){
    vis[u]=1;
    if(v[u].empty())return;
    map<int,int>mp;
    for(auto i:v[u]){
        if(!vis[i]){
            dfs(i);
            dp[u] = max(dp[u], dp[i]);
            mp[dp[i]]++;
        }
    }
    //cout<<u<<"|"<<dp[u]<<" |"<<mp[dp[u]]<<endl;
    if(mp[dp[u]]>1)dp[u]++;

}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        dp[i]=1;
        v[i].clear();
        vis[i]=0;
    }
    for(int i=1;i<=n;i++){
        int q;
        cin>>q;
        v[q].push_back(i);
    }
    dfs(1);
    cout<<dp[1]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
2
3
0 1 2
7
0 1 2 2 1 4 1
 */