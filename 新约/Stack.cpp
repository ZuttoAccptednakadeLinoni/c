//
// Created by k0itoYuu on 2025/7/31.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[500005];
int ans[500005];
int mod=998244353;
signed main(){
    int n=500000;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=i;j>=1;j--){
            arr[j]=arr[j]*(i-1)%mod+arr[j-1];
            arr[j]%mod;
            ans[i]+=((j*(j*j)%mod)%mod*arr[j])%mod;
            ans[i]%=mod;
        }

    }
    cout<<"!!";
    int t;
    cin>>t;
    while(t--){
        int w;
        cin>>w;
        cout<<ans[w]<<endl;
    }
}