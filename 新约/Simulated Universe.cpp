//
// Created by k0itoYuu on 2025/10/12.
//
#include<bits/stdc++.h>
using namespace std;
int dp[8010][8010];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<=n+5;i++){
        for(int j=0;j<=n+5;j++){
            dp[i][j]=-1;
        }
    }
    int a,b,num=0;
    char c;
    dp[0][0]=0;
    for(int i=1;i<=n;i++){
        cin>>c;
        if(c=='B'){
            num++;
            for(int k=0;k<=n;k++){
                if(dp[i-1][k+1]!=-1)dp[i][k]=max(dp[i][k],dp[i-1][k+1]+2);
                if(dp[i-1][k]!=-1)dp[i][k]=max(dp[i-1][k]+1,dp[i][k]);
            }
        }else{
            cin>>a>>b;
            for(int k=0;k<=min(n*2,n+b);k++){
                if(dp[i-1][max(k-b,0)]!=-1)dp[i][min(k,n)]=max(dp[i-1][max(k-b,0)],dp[i][min(k,n)]);
                if(dp[i-1][min(k,n)]!=-1)dp[i][min(k,n)]=max(dp[i][min(k,n)],dp[i-1][min(k,n)]+min(num*2-dp[i-1][min(k,n)],a));
            }
        }
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=max(ans,dp[n][i]);
    }
//    for(int i=0;i<=n;i++){
//        for(int j=0;j<=n;j++){
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}