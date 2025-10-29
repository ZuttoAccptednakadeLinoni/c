//
// Created by k0itoYuu on 2025/8/10.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    map<int,int>mp1;
    map<int,int>mp2;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        mp1[q%k]++;
    }
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        mp2[q%k]++;
    }
    for (auto it = mp1.rbegin(); it != mp1.rend(); ++it) {
        int x = it->first;
        int y = k-x;
        if (mp1[x]+mp1[y]!=mp2[x]+mp2[y]) {
            cout << "No" << endl;
            return;
        }
    }
    cout<<"Yes\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}