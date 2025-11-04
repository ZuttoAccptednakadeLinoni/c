//
// Created by k0itoYuu on 2025/8/27.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a>b){
        if((n%2==a%2)&&(a%2==b%2))cout<<"Yes\n";
        else cout<<"No\n";
    }else {
        if(n%2==b%2)cout<<"Yes\n";
        else cout<<"No\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}