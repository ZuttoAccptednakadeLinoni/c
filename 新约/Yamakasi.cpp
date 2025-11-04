//
// Created by k0itoYuu on 2025/7/3.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

int f[200005];
int qz[200005];
int n;int s, x;
int find(int x){
    map<int ,int>mp;
    int ans=0;
    mp[0]=1;
    for(int i=1;i<=n;i++){
        if(f[i]>x)mp.clear();
        ans+=mp[qz[i]-s];
        mp[qz[i]]++;
    }
    return ans;
}

void solve(){
     scanf("%d",&n);

    cin>>s>>x;
    for(int i=1;i<=n;i++)cin>>f[i];
    for(int i=1;i<=n;i++){
        qz[i]=qz[i-1]+f[i];
    }
    cout<<find(x)-find(x-1)<<endl;
}


signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}