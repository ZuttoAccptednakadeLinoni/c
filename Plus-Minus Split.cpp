
//
// Created by k0itoYuu on 2025/5/22.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    int ans=0;
    cin>>n;
    for (int i=0;i<n;i++){
        char q;
        cin>>q;
        if (q=='-')ans--;
        else ans++;
    }
    cout<<abs(ans)<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}