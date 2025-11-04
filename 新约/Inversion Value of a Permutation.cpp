//
// Created by k0itoYuu on 2025/10/25.
//
#include<bits/stdc++.h>
using namespace std;
int dp[35][3005];
int ans[35];
int cur;
void find(int n,int k){
    if (!n) return;
    for(int i=1;i<=n;i++){
        if(k>=i*(i-1)/2&&dp[n-i][k-i*(i-1)/2]){
            for(int j=1;j<=i;j++){
                ans[n - i + j] = ++cur;
            }
            find(n - i, k - i * (i - 1) / 2);
            return;
        }
    }
}
void solve(){
    int n,k;
    cin>>n>>k;
    k=n*(n-1)/2-k;
    if(!dp[n][k]){
        cout<<0<<endl;
        return;
    }
    else{
        cur = 0;
        find(n,k);
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}
void init()
{
    dp[0][0] = 1;
    for (int i = 0; i < 30; i++)
        for (int j = 0; j <= i * (i - 1) / 2; j++)
            if (dp[i][j])
                for (int k = 1; i + k <= 30; k++)
                    dp[i + k][j + k * (k - 1) / 2] = 1;
    return;
}
int main(){
    int t;
    cin>>t;
    init();
    while(t--)solve();
}