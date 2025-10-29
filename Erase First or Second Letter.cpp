//
// Created by k0itoYuu on 2025/5/21.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    map<char ,int>m;
    for (int i=0;i<n;i++){
        m[s[i]]++;
        ans+=m.size();
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}