//
// Created by k0itoYuu on 2025/11/2.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    int l,r,b,k;
    cin>>l>>r>>b>>k;
    if(b>=l)cout<<b*k;
    else {
        int ans=0;
        ans=(l/b+(l%b>0))*b;
        //cout<<ans<<endl;
        cout<<ans*k<<endl;
    }
}