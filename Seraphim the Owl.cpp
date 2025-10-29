//
// Created by k0itoYuu on 2025/6/9.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[200005];
int brr[200005];
int dp[200005][2];
void solve(){
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        dp[i][0]=0;
        dp[i][1]=0;
    }
    dp[n][0]=0;
    dp[n][1]=0;
    for (int i=0;i<n;i++){
        cin>>brr[i];
    }
    for (int i=n-1;i>=0;i--){
        dp[i][0]=min(dp[i+1][0]+arr[i],dp[i+1][1]+arr[i]);
        dp[i][1]=min(dp[i+1][0],dp[i+1][1])+brr[i];
    }
    int ans=LLONG_MAX;
    for (int i=0;i<m;i++){
        ans=min(ans,dp[i][0]);
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}