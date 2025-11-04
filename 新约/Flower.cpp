//
// Created by k0itoYuu on 2025/7/22.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int q=n/(a+b);
    n%=(a+b);
    if(n>a)cout<<0<<endl;
    else {
        if(q==0)cout<<"Sayonara\n";
        else cout<<n<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}