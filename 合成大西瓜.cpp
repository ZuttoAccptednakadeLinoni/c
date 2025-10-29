//
// Created by k0itoYuu on 2025/9/17.
//
#include<bits/stdc++.h>
using namespace std;
vector<int>arr[200005];
int brr[200005];
bool cmp(int a,int b){
    return a>b;
}
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>brr[i];
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    if(n==1){
        cout<<brr[1]<<endl;
        return;
    }
    int ans=0;
    vector<int>v;
    for(int i=1;i<=n;i++){
        if(arr[i].size()>1)ans=max(ans,brr[i]);
        else v.push_back(brr[i]);
    }int w=0;
    sort(v.begin(),v.end(),cmp);
    if(v.size()>1)w=v[1];
    cout<<max(ans,w)<<endl;
}

int main(){
    int t=1;
    while(t--)solve();
}
/*
7 7
1 1 2 3 1 2 1
1 2
2 3
1 3
2 4
2 5
5 6
5 7
*/