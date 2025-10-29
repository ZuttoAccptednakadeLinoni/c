//
// Created by k0itoYuu on 2025/5/21.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[105];
void solve(){
    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        cin>>arr[i];

    }

    for (int k=2;k<(1ll<<62);k*=2){
        map<int,int>m;
        for (int i=0;i<n;i++)m[arr[i]%k]++;
        if (m.size()==2){
            cout<<k<<endl;
            return;
        }
    }
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}