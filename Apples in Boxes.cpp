//
// Created by k0itoYuu on 2025/5/17.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[100005];
void solve(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    if (arr[n-1]-arr[0]-1>k)cout<<"Jerry\n";
    else if (arr[n-1]-arr[0]-1==k&&arr[n-1]==arr[n-2])cout<<"Jerry\n";
    else if (arr[n-1]-arr[0]-1==k&&arr[n-1]!=arr[n-2]){
        if (sum%2==1)cout<<"Tom\n";
        else cout<<"Jerry\n";
    }else{
        if (sum%2==1)cout<<"Tom\n";
        else cout<<"Jerry\n";
    }
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}