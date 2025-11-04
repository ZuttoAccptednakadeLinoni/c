//
// Created by k0itoYuu on 2025/7/14.
//
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
int dp[1000005][30];
int nxt[1000005][30];
int ans[1000005][30];
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    s=" "+s;
    int mi=1;
    for(int i=0;i<k;i++)dp[n+1][i]=1;
    for(int i=n;i>0;i--){
        int nxtm=INT_MAX;
        for(int j=0;j<k;j++)dp[i][j]=INT_MAX;
        for(int j=0;j<k;j++){
            for(int e=0;e<k;e++){
                if(e==j)dp[i][j]=min(dp[i+1][e],dp[i][j]);
                else dp[i][j]=min(dp[i+1][e]+1,dp[i][j]);
            }
            if(s[i]-'a'==j){
                dp[i][j]++;
                nxt[i][j]=i;
            }
            else {
                nxt[i][j]=nxt[i+1][j];
            }
            nxtm=min(nxtm,dp[i][j]);
        }
    }
    int t;
    cin>>t;
//    for(int i=1;i<=n;i++)cout<<s[i]<<" ";
//    cout<<endl;
//    for(int j=0;j<k;j++){
//        for(int i=1;i<=n;i++)cout<<dp[i][j]<<" ";
//        cout<<endl;
//    }
    while(t--){
        string a;
        cin>>a;
        int now=1;
        int f=1;

        for(int i=0;i<a.size();i++){
//            cout<<nxt[now][a[i]-'a'];
            if(nxt[now][a[i]-'a']){
                now=nxt[now][a[i]-'a'];
                now++;
            }else{
                cout<<0<<endl;
                f=0;
                break;
            }
        }
        //cout<<1<<endl;
        if(!f)continue;
        //cout<<endl;
        //cout<<1<<endl;
        int ans=INT_MAX;
        for(int i=0;i<k;i++){
            ans=min(dp[now][i],ans);
        }
        cout<<ans<<endl;
//        queue<pp>q;
//        for(int i)
    }
}