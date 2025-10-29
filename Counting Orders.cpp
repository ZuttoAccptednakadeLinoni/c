//
// Created by k0itoYuu on 2025/6/9.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
int brr[200005];
int q[200005];
void solve(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        q[i]=0;
    }
    for (int i=0;i<n;i++){
        cin>>brr[i];
    }
    sort(arr,arr+n);
    sort(brr,brr+n);
    int sum=n;
    int j=0;
    for (int i=0;i<n;i++){
        while (arr[j]<=brr[i]){
            j++;
        }
        q[i]=n-j;
    }
    int ans=1;
    for (int i=n-1;i>=0;i--){
        if (q[i]-(n-i-1)<=0){
            cout<<0<<endl;
            return;
        }else{
            ans=ans*(q[i]-(n-i-1))%1000000007;
        }
    }
    cout<<ans<<endl;

}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}