//
// Created by k0itoYuu on 2025/5/14.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[1005][1005];
int sumz[3005];
int sumy[3005];
void solve(){
    int n,m;
    cin>>n>>m;
    for (int i=0;i<3005;i++){
        sumz[i]=0;
        sumy[i]=0;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>arr[i][j];
            //cout<<i<<j<<" ";
        }
    }
    for (int i=2;i<=n+m;i++){
        //cout<<i<<endl;
        int x=min(i-1,m);
        int y=max(1ll,i-m);

        while (x>0&&y<=n){
            sumz[i]+=arr[y][x];
            x--,y++;
        }
        //cout<<sumz[i]<<" ";
    }
    for (int i=2;i<=n+m;i++){
        //cout<<i<<" ";
        int x=min(i-1ll,m);
        x=m+1-x;
        int y=max(1ll,i-m);
        //cout<<x<<" "<<y<<endl;
        while (x<=m&&y<=n){
            sumy[i]+=arr[y][x];
            x++,y++;
        }
        //cout<<sumy[i]<<" \n";
    }
    int ans=0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            ans=max(ans,sumz[i+j]+sumy[m+1-j+i]-arr[i][j]);
        }
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}