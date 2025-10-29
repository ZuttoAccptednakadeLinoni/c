//
// Created by k0itoYuu on 2025/9/4.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int dp[200005];
int sy[200005];
void solve(){
    int n;
    cin>>n;
    vector<vector<int>>v(n+5);
    for(int i=1;i<=n;i++){
        v[i].clear();
        dp[i]=0;
        sy[i]=0;
    }
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        v[arr[i]].push_back(i);
        sy[i]=v[arr[i]].size()-1;
    }

    for(int i=1;i<=n;i++){

            dp[i]=max(dp[i],dp[i-1]);
            int q=sy[i];
            if(q+arr[i]-1<v[arr[i]].size())dp[v[arr[i]][q+arr[i]-1]]=max(dp[v[arr[i]][q+arr[i]-1]],dp[i-1]+arr[i]);

        //cout<<dp[i]<<" ";
    }
    //cout<<endl;
    cout<<dp[n]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}