//
// Created by k0itoYuu on 2025/9/25.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=1;i<=n;i++){
        int q;
        cin>>q;
        m[q]++;
    }
    int ans=0;
    ans+=m[0];
    ans+=m[-1]%2*2;
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}