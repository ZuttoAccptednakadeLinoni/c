//
// Created by k0itoYuu on 2025/8/12.
//
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
vector<int>v[400005];

map<int,int>m;
int fb[200005];
int d[200005];
pp dp[200005][2];
int ad,l;
void dfs(int i){
    if(i==0)return;
    for(auto u:v[i]){
//        d[u]=d[i]+1;
//        l=max(l,d[u]);
        dfs(u);
        if(abs(v[u][0]-v[u][1])>1){

            dp[u][0].first=fb[dp[v[u][0]]-dp[v[u][1]]]
        }
    }

}
void solve(){
    int n;
    cin>>n;l=0;
    m.clear();
    for(int i=1;i<=n;i++){
        int a,b;
        v[i].clear();
        cin>>a>>b;
        v[i].push_back(a);
        v[i].push_back(b);
        d[i]=0;
    }
    ad=n+1;
    dfs(1);
    int ans=INT_MAX;
    int s=1;
    for(auto i:m){
        if(i.first==l)break;
        if(i.first>=26)break;
        s+= m[i.first+1];
        //cout<<i.first<<" ";
        ans=min(ans,(1<<(i.first))-1-i.second+n-s);

    }
    cout<<ans<<endl;
}


int main(){
    int t;
    cin>>t;
    fb[1]=1;
    fb[2]=2;
    for(int i=3;i<=26;i++){
        fb[i]=fb[i-1]+i--1;
    }
    while(t--)solve();
}