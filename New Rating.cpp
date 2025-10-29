//
// Created by k0itoYuu on 2025/6/27.
//
#include<bits/stdc++.h>
using namespace std;
int arr[300005];
int dp[300005][3];
int bj(int a,int b){
    if (a>b)return 1;
    else if (a==b)return 0;
    else return -1;
}
void solve(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        dp[i][1]=dp[i][2]=dp[i][0]=-INT_MAX;

    }
    dp[0][2]=-INT_MAX;
    dp[0][1]=-INT_MAX;
    for (int i=1;i<=n;i++){

        dp[i][0]=dp[i-1][0]+bj(arr[i],dp[i-1][0]);
        dp[i][1]=max(dp[i-1][1],dp[i-1][0]);
        dp[i][2]=max(dp[i-1][1]+bj(arr[i],dp[i-1][1]),dp[i-1][2]+bj(arr[i],dp[i-1][2]));
    }

    cout<<max(dp[n][1],dp[n][2])<<endl;
    // for (int i=1;i<=n;i++)cout<<dp[i][0]<<" ";
    // cout<<endl;
    // for (int i=1;i<=n;i++)cout<<dp[i][1]<<" ";
    // cout<<endl;
    // for (int i=1;i<=n;i++)cout<<dp[i][2]<<" ";
    // cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}