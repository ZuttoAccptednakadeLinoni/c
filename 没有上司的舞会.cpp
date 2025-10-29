//
// Created by k0itoYuu on 2025/5/27.
//
#include<bits/stdc++.h>
using namespace std;
int arr[6005];
bool vi[6005];
vector<int>v[6005];
int dp[6006][2];
void solve(int u){
    dp[u][0]=0;
    dp[u][1]=arr[u];
    for (auto vv:v[u]){
        solve(vv);
        dp[u][0]+=max(dp[vv][0],dp[vv][1]);
        dp[u][1]+=dp[vv][0];
    }
}
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for (int i=1;i<n;i++){
        int k,l;
        cin>>l>>k;
        vi[l]=1;
        v[k].push_back(l);
    }
    int b;
    for (int i=1;i<=n;i++){
        if (!vi[i]){
            b=i;break;
        }
    }
    solve(b);
    cout<<max(dp[b][0],dp[b][1])<<endl;
}