//
// Created by k0itoYuu on 2025/9/20.
//
#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
vector<int>ve[200005];map<pp,pp>mp;
int ans[200005];
int vis[200005];
int mx,mi;
void dfs(int u){
    //cout<<u<<endl;
    vis[u]=1;
    for(auto v:ve[u]){
        if(!vis[v]){
            dfs(v);
            if(u>v){
                if(mp[{u,v}].first<mp[{u,v}].second){
                    ans[v]=mx;
                    mx--;
                }else{
                    ans[v]=mi;
                    mi++;
                }
            }else{
                if(mp[{v,u}].first<mp[{v,u}].second){
                    ans[v]=mi;
                    mi++;

                }else{
                    ans[v]=mx;mx--;
                }
            }

        }

    }
}

void solve(){
    int n;
    cin>>n;
    mx=n,mi=1;
    mp.clear();
    for(int i=1;i<=n;i++){
        vis[i]=0;
        ve[i].clear();
        ans[i]=0;
    }
    for(int i=1;i<n;i++){
        int u,v,a,b;
        cin>>u>>v>>a>>b;

        if(u>v)mp[{u,v}]={a,b};
        else mp[{v,u}]={b,a};
        ve[u].push_back(v);
        ve[v].push_back(u);
    }//cout<<"!!!"<<endl;
    dfs(1);
    ans[1]=mi;
    //cout<<mi<<mx<<endl;
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}