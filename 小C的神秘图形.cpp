//
// Created by k0itoYuu on 2025/9/17.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string h, l;
    cin>>n;
    cin>>h>>l;
    for(int i=0;i<n;i++){
        if(h[i]!='1'&&l[i]!='1'){
            cout<<0<<endl;
            return;
        }
    }
    cout<<1<<endl;
}

int main(){
    int t=1;

    while(t--)solve();
}