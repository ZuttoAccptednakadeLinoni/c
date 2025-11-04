//
// Created by k0itoYuu on 2025/7/2.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,j,k,jj;
    cin>>n>>j>>k;
    int m=0;
    for(int i=0;i<n;i++){
        int q;

        cin>>q;
        if(i==j-1)jj=q;
        m=max(m,q);
    }
    if(k==1&&jj==m)cout<<"YES\n";
    else if(k>=2)cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}