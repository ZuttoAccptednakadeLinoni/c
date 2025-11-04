//
// Created by k0itoYuu on 2025/5/21.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    s=" "+s;
    vector<int>v;
    for (int i=1;i<=n/2;i++){
        if (s[i]!=s[n-i+1])v.push_back(i);
    }
    //cout<<v.size()<<endl;
    //for (auto i:v)cout<<i<<" ";
    //cout<<endl;
    if (v.empty()){
        cout<<"Yes\n";
        return;
    }
    //cout<<v[0]+v.size()-1<<v[v.size()-1];
    if (v[0]+v.size()-1!=v[v.size()-1])cout<<"No\n";
    else cout<<"Yes\n";
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}