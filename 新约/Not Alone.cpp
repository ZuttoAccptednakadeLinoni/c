//
// Created by k0itoYuu on 2025/10/11.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[200005];
int dp[200005];
int min(int a,int b,int c){
    return min(min(a,b),c);
}
int max(int a,int b,int c){
    return max(max(a,b),c);
}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int ans=LLONG_MAX;
    for(int i=0;i<4;i++){
        dp[0]=0;
        dp[1]=1e9;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-2]+abs(arr[i]-arr[i-1]);
            if(i>=3)dp[i]=min(dp[i],dp[i-3]+abs(max(arr[i],arr[i-1],arr[i-2])-min(arr[i],arr[i-1],arr[i-2])));
            //cout<<dp[i]<<" ";
        }
        //cout<<endl;
        ans=min(ans,dp[n]);
        for (int i=2;i<=n;i++) {
            swap(arr[i],arr[i - 1]);
        }
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}