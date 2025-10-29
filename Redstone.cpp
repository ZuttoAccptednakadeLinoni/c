//
// Created by k0itoYuu on 2025/8/26.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;m[q]++;
    }
    for(auto i:m){
        if(i.second>1){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}