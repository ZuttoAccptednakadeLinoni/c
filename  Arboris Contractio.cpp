//
// Created by k0itoYuu on 2025/8/10.
//
#include<bits/stdc++.h>
using namespace std;
vector<int>ve[200005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)ve[i].clear();
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    if(n==2){
        cout<<0<<endl;
        return;
    }
    int ans=INT_MAX;
    int q=0;
    for(int i=1;i<=n;i++)if(ve[i].size()==1)q++;

    for(int i=1;i<=n;i++){
        int num=0;
        for(auto j:ve[i]){
            if(ve[j].size()==1)num++;
        }
        ans=min(q-num,ans);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}