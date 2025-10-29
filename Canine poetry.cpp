//
// Created by k0itoYuu on 2025/6/16.
//
#include<bits/stdc++.h>
using namespace std;
int dp[100005];
void solve(){
    string s;
    cin>>s;
    dp[0]=0;
    for (int i=1;i<s.size();i++){
        dp[i]=dp[i-1];
        if (s[i]==s[i-1]){
            // dp[i]++;
            s[i]='!';
        }
        if (s[i]==s[i-2]){
            // dp[i]++;
            s[i]='!';
        }

    }
    int ans=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='!')ans++;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}