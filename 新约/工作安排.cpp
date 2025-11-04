//
// Created by k0itoYuu on 2025/7/12.
//
#include<bits/stdc++.h>
using namespace std;
int dp[3][5005];
struct wk{
    int t,d,p;
};
wk arr[5005];
bool cmp(wk a,wk b){
    return a.d<b.d;
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=5000;j++){
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        int t,d,p;
        cin>>t>>d>>p;
        arr[i]={t,d,p};
    }
    sort(arr+1,arr+n+1,cmp);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=arr[i].d;j++){
            if(j-arr[i].t>=0)dp[i%2][j]=max(dp[(i-1)%2][j-arr[i].t]+arr[i].p,dp[(i-1)%2][j]);
            else dp[i%2][j]=max(dp[i%2][j],dp[(i-1)%2][j]);
        }
        for(int j=1;j<=n;j++)dp[(i-1)%2][j]=0;
    }
    int ans=0;
    for(int i=1;i<=5000;i++){
            //cout<<dp[n][i]<<" ";
            ans=max(ans,dp[n%2][i]);
        //cout<<endl;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}