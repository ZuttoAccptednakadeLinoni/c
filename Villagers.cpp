//
// Created by k0itoYuu on 2025/8/26.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int ans=0;
    for(int i=n-1;i>=0;i-=2){
        ans+=arr[i];
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}