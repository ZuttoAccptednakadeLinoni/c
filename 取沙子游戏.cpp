//
// Created by k0itoYuu on 2025/7/11.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    if(n%2==1){
        cout<<"Alice\n";
        return;
    }
    else{
        int q=n;
        while(n%2==0)n/=2;

            if(q/n<=m){
                cout<<"Alice\n";
                return;
            }


    }cout<<"Bob\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}