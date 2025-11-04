//
// Created by k0itoYuu on 2025/9/25.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
void solve(){
    int n,k;
    cin>>n>>k;
    int cnt=0;
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    int a=0,b=0;
    for(int i=0;i<k;i++){
        if(m[i]==0)a++;
    }
    cout<<max(a,m[k])<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}