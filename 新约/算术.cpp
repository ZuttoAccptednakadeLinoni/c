//
// Created by k0itoYuu on 2025/9/17.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
#define p 998244353
long long binpow(long long a, long long b) {
    if (b == 0) return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res % p * a % p;
    else
        return res * res % p;
}
void solve(){
    int arr[20];
    int sum=0;
    for(int i=1;i<=9;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    arr[10]=0;
    if(sum==0)cout<<0<<endl;
    while(arr[1]){
        int f=1;
        if(arr[2]){
            arr[2]--;
            arr[3]++;arr[1]--;
            f=0;
        }else {
            if(arr[1]>1){
                arr[2]++;
                arr[1]-=2;
                f=0;
            }
        }
        if(f)break;
    }
    int ans=1;
    if(arr[1]){
        for(int i=2;i<=9;i++){
            if(arr[i]){
                arr[i]--;
                arr[i+1]++;
                break;
            }
        }
    }
    for(int i=1;i<=10;i++){
        //cout<<arr[i]<<" ";
        ans=ans*binpow(i,arr[i])%p;
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}