//
// Created by k0itoYuu on 2025/7/17.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int p[100005];
int s[100005];
int arr[100005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    s[0]=s[n];
    for(int i=0;i<n;i++){
        //cout<<__gcd(s[i],p[i+1])<<" "<<s[0]<<endl;
        if(__gcd(s[i],p[i+1])!=s[0]){
            cout<<"No\n";
            return;
        }
    }
    for(int i=1;i<=n;i++){
        //cout<<__gcd(s[i],p[i+1])<<" "<<s[0]<<endl;
        arr[i]=lcm(s[i],p[i]);
    }
    int g=0;
    int f=1;
    for(int i=1;i<=n;i++){
        g=__gcd(g,arr[i]);
        if(g!=s[i])f=0;
    }
    g=0;
    for(int i=n;i>0;i--){
        g=__gcd(g,arr[i]);
        if(g!=p[i])f=0;
    }
    if(f)cout<<"Yes\n";
    else cout<<"No\n";
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}