//
// Created by k0itoYuu on 2025/7/5.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    if(n%2==1){
        cout<<l<<endl;
    }else{
        int i=0;
        if(n<3){
            cout<<-1<<endl;
            return;
        }
        while((1ll<<i)<=l)i++;
        if((1ll<<i)>r)cout<<-1<<endl;
        else{
            if(k<=n-2)cout<<l<<endl;
            else cout<<(1ll<<i)<<endl;
        }
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}