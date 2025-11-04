//
// Created by k0itoYuu on 2025/9/25.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    int ans=0;
    for(int i=1;i<=n;i+=2){
        ans=max(ans,arr[i+1]-arr[i]);
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}