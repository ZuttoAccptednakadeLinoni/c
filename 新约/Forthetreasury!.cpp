//
// Created by k0itoYuu on 2025/7/24.
//
#include<bits/stdc++.h>
using namespace std;
int arr[300005];
void solve(){
    int n,k,c;
    cin>>n>>k>>c;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    for(int i=k+1;i<=n;i++){
        arr[i]-=(i-k)*c;
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<min(k,n-k);i++){

    }
}

int main(){
    int t;
    t=1;
    while(t--)solve();
}