//
// Created by k0itoYuu on 2025/9/25.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
void solve(){
    int n,k,l,r;
    cin>>n>>k>>l>>r;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    int lt=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        mp[arr[i]]++;
        lt++
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}