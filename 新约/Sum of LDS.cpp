//
// Created by k0itoYuu on 2025/7/28.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans=0;
    int s=0;
    int now=0;
    for(int i=1;i<=n;i++){
        int c;
        cin>>c;
        if(c>s)now++;
        else now+=i;
        ans+=now;
        s=c;
    }

    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}