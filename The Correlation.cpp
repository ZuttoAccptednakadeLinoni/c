//
// Created by k0itoYuu on 2025/8/5.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    int q;
    int a=0,b=0;
    for(int i=1;i<=n;i++){
        cin>>q;
        if(q%2==0)a++;
        else b++;
    }
    cout<<(a*b)%998244353<<endl;
}

signed main(){
    int t=1;
    while(t--)solve();
}