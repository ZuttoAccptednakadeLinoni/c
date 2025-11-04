//
// Created by k0itoYuu on 2025/8/10.
//
#include<bits/stdc++.h>
using namespace std;
int arr[15];
int brr[15];
void solve(){
    int n;
    cin>>n;
    int t=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
        if(brr[i]<arr[i])t+=arr[i]-brr[i];
    }
    cout<<t+1<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--)solve();
}