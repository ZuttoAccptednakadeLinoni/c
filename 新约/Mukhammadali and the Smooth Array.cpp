//
// Created by k0itoYuu on 2025/11/2.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[8005];
int dp[8005];
int c[8005];
void solve(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];

    }
    for(int i=1;i<=n;i++){
        cin>>c[i];
        sum+=c[i];dp[i]=c[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(arr[i]>=arr[j])dp[i]=max(dp[i],dp[j]+c[i]);

        }
        ans=max(dp[i],ans);
        //cout<<dp[i]<<" ";
    }
    //cout<<endl;
    //cout<<dp[n]<<"||";
    sum-=ans;
    cout<<sum<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}