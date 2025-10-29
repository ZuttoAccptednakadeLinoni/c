//
// Created by k0itoYuu on 2025/7/17.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[500005];
int dp[500005][2];
int mod=998244353;
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    int l=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        dp[i][1]=0;dp[i][1]=0;
        if(arr[i]==-1){
            if(arr[i-1]!=-1){
                dp[i][1]=(dp[i-1][0]+1)%mod;
                dp[i][0]=(dp[i-1][1]+dp[i-1][0])%mod;
            }else{
                dp[i][1]=(dp[i-1][1]+((dp[i-1][0]*2)+1)%mod)%mod;
                dp[i][0]=(dp[i-1][1]+dp[i-1][0])%mod;
            }
        }
        if(arr[i]==1){
            dp[i][1]=(dp[i-1][0]+1+dp[i-1][1])%mod;

        }else if(arr[i]==0){
            dp[i][0]=(dp[i-1][1]+dp[i-1][0])%mod;
        }
    }
    for(int i=1;i<=n;i++)cout<<dp[i][1]<<" ";
    cout<<endl;
    for(int i=1;i<=n;i++)cout<<dp[i][0]<<" ";
    cout<<endl;
    cout<<(dp[n][0]+dp[n][1])%mod<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}