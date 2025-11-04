//
// Created by k0itoYuu on 2025/10/31.
//
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
vector<int>v[1005];
vector<pp>ans;
void dfs(int l,int r,int now){
    if(l==r){
        if(v[l].size()==0)return;
        for(int i=now;i<r;i++){
            ans.push_back({1,i});
        }
        return;
    }
    bool f=0;
    int m=(l+r)/2;
    for(int i=m+1;i<=r;i++){
        if(v[i].size()==0)continue;
        f=1;
        for(auto it:v[i])ans.push_back({2,it});
    }
    if(f){
        for(int i=now+1;i<=m;i++){
            ans.push_back({1,i});
        }
    }
    dfs(l,m,now);
    dfs(m+1,r,m+1);
}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int q;
        cin>>q;
        v[q].push_back(i);
    }
    dfs(0,n,0);
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

int main(){
    int t;
    t=1;
    while(t--)solve();
}