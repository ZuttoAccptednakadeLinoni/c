//
// Created by k0itoYuu on 2025/7/25.
//
#include<bits/stdc++.h>
using namespace std;
int cf[5005];
int sum[5005];
int dp[5005][5005];
void solve(){
    int n,m;
    cin>>n>>m;
    int cnt=0;int c;
    for(int i=1;i<=n;i++){

        cin>>c;
        if(c==0){

            sum[0]=cf[0];
            dp[cnt][0]+=sum[0];
            for(int j=1;j<=cnt;j++){
                sum[j]=sum[j-1]+cf[j];
                dp[cnt][j]+=sum[j];
            }
            cnt++;
            for(int j=0;j<=cnt;j++){
                dp[cnt][j]=max(dp[cnt-1][j],dp[cnt-1][j-1]);
            }
            memset(cf,0,sizeof(cf));
        }else if(c>0){
            cf[c]++;
        }else if(c<0){
            if(abs(c)<=cnt){
                cf[0]++;
                cf[cnt+c+1]--;
            }

        }

    }
    if(c!=0){
        sum[0]=cf[0];
        dp[cnt][0]+=sum[0];
        for(int j=1;j<=cnt;j++){
            sum[j]=sum[j-1]+cf[j];
            dp[cnt][j]+=sum[j];
        }
    }

//    cout<<endl;
//    for(int i=0;i<=cnt;i++){
//        for(int j=0;j<=cnt;j++){
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<endl;
//    }

    int ans=0;
    for(int j=0;j<=cnt;j++){
        ans=max(ans,dp[cnt][j]);
    }
    cout<<ans<<endl;
}

int main(){
    int t=1;
    while(t--)solve();
}