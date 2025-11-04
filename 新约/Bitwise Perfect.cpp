//
// Created by k0itoYuu on 2025/7/17.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    sort(arr+1,arr+1+n);
    int f=1;
    for(int i=1;i<=n;i++){
        for(int j=30;j>=0;j--){
            int a=arr[i]>>j&1;
            int b=arr[i-1]>>j&1;
            if(a==0&&b==1)break;
            if(a==1&&b==1)f=0;
        }
    }
    if(f)cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}