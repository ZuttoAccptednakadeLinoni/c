//
// Created by k0itoYuu on 2025/9/20.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(b==1)cout<<-1<<endl;
    else if(a<b){
        cout<<2<<endl;
    }else if(a==b){
        cout<<-1<<endl;
    }else{
        if(a>=b*2)cout<<3<<endl;
        else cout<<-1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}