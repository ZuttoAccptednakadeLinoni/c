//
// Created by k0itoYuu on 2025/7/17.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    char ans=s[0];
    for(int i=0;i<s.size();i++){
        ans=min(ans,s[i]);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}