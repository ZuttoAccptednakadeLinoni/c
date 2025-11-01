//
// Created by k0itoYuu on 2025/11/1.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[2005];
int brr[2005];
#define mod 998244353
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        cin>>brr[i];
    }
    arr[0]=0,brr[0]=0,arr[n+1]=INT_MAX,brr[n+1]=INT_MAX;
    int ans=1;
    for(int i=1;i<=n;i++){
        int q=0;
        if(arr[i]>=arr[i-1]&&brr[i]>=brr[i-1]&&min(arr[i],brr[i])>=max(arr[i-1],brr[i-1]))q=2;
        else if(arr[i]>=arr[i-1]&&brr[i]>=brr[i-1])q=1;
        else if(max(arr[i],brr[i])>=max(arr[i-1],brr[i-1])&&min(arr[i],brr[i])>=min(arr[i-1],brr[i-1]))q=1;
        else q=0;
        ans*=q;
        ans%=mod;
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}


signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}