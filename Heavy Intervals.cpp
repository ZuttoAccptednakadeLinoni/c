//
// Created by k0itoYuu on 2025/8/9.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
int brr[200005];
int crr[200005];
int drr[200005];
bool cmp(int a,int b){
    return a>b;
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    for(int i=0;i<n;i++){
        cin>>crr[i];
    }
    int ans=0;
    sort(arr,arr+n);
    sort(brr,brr+n);
    sort(crr,crr+n,cmp);


    cout<<endl;
    for(int i=0;i<n;i++){
        ans+=brr[i]*crr[i];
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
5
81217 81570 20439 46555 23390
160683 176054 160994 97805 184462
9 3 1 8 4
*/