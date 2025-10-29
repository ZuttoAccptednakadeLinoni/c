//
// Created by k0itoYuu on 2025/7/8.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
    int n;
    cin>>n;
    int m=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(m==-1)m=arr[i];
        m=min(m,arr[i]);
        ans+=m;
    }
    cout<<arr[0]+min(arr[0],arr[1])<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}