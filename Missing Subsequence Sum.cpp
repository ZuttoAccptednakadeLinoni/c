//
// Created by k0itoYuu on 2025/9/5.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>ans;
    int i=1;
    int sum=0;
    while(sum+i<k){
        sum+=i;
        ans.push_back(i);
        i*=2;
    }
    ans.push_back(k-sum-1);
    int j=1;
    int now=k+1;
    ans.push_back(k+2);
    for(i=ans.size();i<25;i++){
        ans.push_back(now);
        now*=2;
    }
    cout<<ans.size()<<endl;
    for(auto a:ans){
        cout<<a<<" ";
    }
    cout<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}