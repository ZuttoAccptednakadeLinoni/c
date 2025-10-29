//
// Created by k0itoYuu on 2025/7/17.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pp pair<int,int>
int arr[200005];
vector<pp>ve[200005];
bool vis[200005];
map<int ,int >mp[200005];
int fa[200005];
int ans;
void dfs(int i){
    vis[i]=1;
    for(auto u:ve[i]){
        if(!vis[u.first]){
            fa[u.first]=i;
            //cout<<i<<" "<<u.first<<endl;
            mp[i][arr[u.first]]+=u.second;
            dfs(u.first);
        }
    }
    ans+=mp[i][arr[i]];
}

void solve(){
    int n,q;
    cin>>n>>q;
    map<pp,int>mmp;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        fa[i]=0;
        mp[i].clear();
        ve[i].clear();
        vis[i]=0;
    }
    ans=0;
    int sum=0;
    for(int i=1;i<n;i++){
        int u,v,c;
        cin>>u>>v>>c;
        ve[u].push_back({v,c});
        ve[v].push_back({u,c});
        mmp[{v,u}]=c;
        mmp[{u,v}]=c;
        sum+=c;
    }
    dfs(1);
    //cout<<sum<<"|"<<ans<<endl;
    //cout<<ans<<endl;
    while(q--){
        int v,x;
        cin>>v>>x;
        ans-=mp[v][arr[v]];
        ans+=mp[v][x];
        //cout<<ans<<"||";
        if(v!=1){
            int q=mmp[{fa[v],v}];
            mp[fa[v]][arr[v]]-=q;
            mp[fa[v]][x]+=q;
            if(arr[fa[v]]==arr[v])ans-=q;
            if(arr[fa[v]]==x)ans+=q;
        }

        arr[v]=x;

        cout<<sum-ans<<endl;
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
1

2 1

1 2

2 1 5

2 1
 */