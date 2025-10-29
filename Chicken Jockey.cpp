//
// Created by k0itoYuu on 2025/8/26.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
int dp[200005][2];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    dp[n][0]=arr[n-1]+max(0ll,arr[n]-n+1);
    dp[n][1]=arr[n]-1;
    //cout<<dp[n][0]<<" "<<dp[n][1]<<endl;
    for(int i=n-1;i>1;i--){
        dp[i][0]=min(dp[i+1][0],dp[i+1][1])+arr[i-1]+max(0ll,arr[i]-i+1);
        dp[i][1]=min(dp[i+1][0],dp[i+1][1]+arr[i]-1);
        //cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
    }
    dp[1][0]=min(dp[1+1][0],dp[1+1][1])+arr[1-1]+max(0ll,arr[1]-1+1);
    dp[1][1]=min(dp[2][0],dp[2][1]+arr[1]);
    cout<<min(dp[1][0],dp[1][1])<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}