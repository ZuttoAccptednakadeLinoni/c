//
// Created by k0itoYuu on 2025/8/10.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int brr[200005];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    brr[n]=0;
    arr[n]=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=brr[i]){
            if((arr[i]^arr[i+1])!=brr[i]&&((arr[i]^brr[i+1])!=brr[i])){
                cout<<"No\n";
                return;
            }
        }
    }
    cout<<"Yes\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}