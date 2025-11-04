//
// Created by k0itoYuu on 2025/6/17.
//
#include<bits/stdc++.h>
using namespace std;
int dp[200005];
char s[100005];
void solve(){
    int n,p,k;
    cin>>n>>p>>k;
    //string s;
    //cin>>s;
    for (int i=1;i<=n;i++){
        char c;
        cin>>c;
        s[i]=c;
    }
    int x,y;
    cin>>x>>y;
    for (int i=0;i<=n+k;i++)dp[i]=0;
    for (int i=p;i<=n+k;i++){

        if (s[i]=='1')dp[i]=dp[max(i-k,0)];
        else dp[i]=dp[max(i-k,0)]+x;
        //cout<<i<<" "<<dp[i]<<" \n";
    }
    //cout<<endl;
    int ans=INT_MAX;
    for (int i=p;i<=n;i++){
        int q=(n-i)/k+((n-i)%k==0);
        //cout<<q*k+i<<endl;
        if (i+k*q==n+k)q--;
        //cout<<i<<" "<<q*k+i<<" "<<dp[q*k+i]-dp[max(i-k,0)]+(i-p)*y<<endl;
        ans=min(ans,dp[q*k+i]-dp[max(i-k,0)]+(i-p)*y);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}