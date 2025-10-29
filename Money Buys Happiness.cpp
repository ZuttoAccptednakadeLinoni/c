//
// Created by k0itoYuu on 2025/5/22.
//
#include<bits/stdc++.h>
#define int long long
#define pp pair<long long,long long>
using namespace std;
int dp[55][100005];
void solve(){
    int n,x;
    cin>>n>>x;
    int sum=0;


    queue<pp>q;
    for (int i=1;i<=n;i++){
        int c,h;

        cin>>c>>h;sum+=h;
        q.push({c,h});
    }
    for (int i=0;i<55;i++){
        for (int j=0;j<=sum;j++)dp[i][j]=-LLONG_MAX;
    }
    int i=0;dp[0][0]=0;
    while (!q.empty()){
        i++;
        auto qq=q.front();
        q.pop();
        int c=qq.first;
        int h=qq.second;
        for (int j=0;j<=sum;j++){
            dp[i][j]=dp[i-1][j]+x;
            if (j-h>=0)if (dp[i-1][j-h]>=c)dp[i][j]=max(dp[i-1][j-h]+x-c,dp[i][j]);

        }
    }


    int ans=0;
    // for (int j=0;j<=n;j++){
    //     for (int i=0;i<=sum;i++){
    //         cout<<dp[j][i]<<" ";
    //     }
    //     cout<<"end"<<endl;
    // }
    for (int i=0;i<=sum;i++){
             if (dp[n][i]>=0)ans=i;
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}
/*
1
3 10
7 1
10 2
15 1
 */