//
// Created by k0itoYuu on 2025/9/16.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n+5);
    vector<int>bot(200005);
    map<int,int>m;
    int c=2;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        m[v[i]]++;
        c=max(c,v[i]);
    }
    for(int i=2;i<=c;i++){
        for(auto j:m){

        }


    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}