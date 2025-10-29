//
// Created by k0itoYuu on 2025/5/26.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
char arr[2005][2005];
int dp[2005][2005][2];
const int MOD=998244353;

void solve(){
    int n,m,r;
    cin>>n>>m>>r;
    for (int i=0;i<=n;i++){
        for (int j=0;j<=m;j++)dp[i][j][0]=0,dp[i][j][1]=0;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            char c;
            cin>>arr[i][j];
            //cout<<arr[i][j];
        }
        //cout<<endl;
    }
    for (int i=1;i<=m;i++){
        vector<int>v(m+2);
        if (arr[n][i]=='X')dp[n][i][0]=1;
        //cout<<dp[n][i][0]<<" ";
    }
    //cout<<endl;
    vector<int>fr(m+3);
    for (int i=n;i>0;i--){

        for (int j=1;j<=m;j++){
            if (arr[i][j]=='#')continue;
            dp[i][j][0]+=(fr[min(j+r-1,m)]-fr[max(1ll,j-r+1)-1]+MOD)%MOD;
            dp[i][j][0]=dp[i][j][0]%MOD;
        }
        vector<int>now(m+3);
        for (int j=1;j<=m;j++)now[j]=(now[j-1]+dp[i][j][0]+MOD)%MOD;
        for (int j=1;j<=m;j++){
            if (arr[i][j]=='#')continue;
            dp[i][j][1]+=(now[min(j+r,m)]-now[max(1ll,j-r)-1]-dp[i][j][0]+MOD)%MOD;
            dp[i][j][1]=dp[i][j][1]%MOD;
        }
        fr.clear();
        for (int j=1;j<=m;j++){
            fr[j]=(fr[j-1]+dp[i][j][1]+dp[i][j][0]+MOD)%MOD;
            //cout<<dp[i][j][1]<<" "<<dp[i][j][0]<<"|";
        }
        //cout<<endl;
    }
    int ans=0;

    //cout<<endl;
    cout<<fr[m]<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}