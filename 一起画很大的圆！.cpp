//
// Created by k0itoYuu on 2025/5/17.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (b-a>d-c){
        cout<<a<<" "<<d<<'\n'<<a+1<<" "<<d<<'\n'<<b<<" "<<d-1<<"\n";
    }else{
        cout<<a<<" "<<c<<"\n"<<a<<" "<<c+1<<"\n"<<a+1<<" "<<d<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}