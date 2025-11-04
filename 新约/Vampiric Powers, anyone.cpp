//
// Created by k0itoYuu on 2025/6/15.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
const int MAXN = 1e5+10;
int dp[MAXN][300];
void solve(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=0;j<256;j++)dp[i][j]=0;
        cin>>arr[i];
    }
    //vector<int >a(n+1,0);
    bool f=0;
    int res=0;

    for (int i=1;i<=n;i++){
        for(int j=0;j<256;j++)dp[f][j]=0;
        dp[f][arr[i]]=1;
        for (int j = 0; j < 256; j++) {
            dp[f][j]=dp[!f][j^arr[i]];
            if(dp[f][j]==1){
                res=max(res,j);
            }
        }
        f=!f;
    }
    cout<<res<<endl;
}


int main(){
    int t;
    cin>>t;
    while (t--)solve();
}