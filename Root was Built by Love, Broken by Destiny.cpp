//
// Created by k0itoYuu on 2025/8/8.
//
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
vector<int>ve[200005];
int vis[200005];
int j[200005];
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        ve[i].clear();
        vis[i]=0;
    }

    //cout<<"!!!"<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    if(m>n-1){
        cout<<0<<endl;
        return;
    }
    int ans=2;
    queue<int>q;

    for(int i=1;i<=n;i++){
        if(ve[i].size()>1){
            q.push(i);vis[i]=1;
        }
    }
    int f=0;

    while(!q.empty()){
        int u=q.front();
        //cout<<u<<endl;
        q.pop();
        int num=0;
        if(ve[u].size()>1)f++;
        for(auto v:ve[u]){
            if(ve[v].size()>1){
                if(!vis[v]){
                    q.push(v);
                    vis[v]=1;
                }
                num++;

            }
        }
        if(num>2){
            ans=0;
            break;
        }
        ans=ans*(j[ve[u].size()-num])%mod;
        ans%=mod;
        //cout<<ans<<endl;
    }
    //cout<<f<<endl;
    if(f>1)ans*=2,ans%=mod;

    cout<<ans%mod<<endl;
}

signed main(){
    j[0]=1;
    for(int i=1;i<=200000;i++){
        j[i]=(j[i-1]*i)%mod;
    }

    int t;
    cin>>t;
    while(t--)solve();
}