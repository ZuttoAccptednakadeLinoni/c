//
// Created by k0itoYuu on 2025/8/27.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        q+=(q%(k+1))*k;
        ans.push_back(q);
    }
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}