//
// Created by k0itoYuu on 2025/8/27.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
int brr[200005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        brr[i]=arr[i];
    }

    if(arr[1]+arr[3]>arr[2]){
        arr[3]-=min(arr[3],arr[1]+arr[3]-arr[2]);
        if(arr[1]+arr[3]>arr[2]){
            arr[1]-=min(arr[1],arr[1]+arr[3]-arr[2]);
        }
    }
    for(int i=2;i<n-1;i++){
        if(i%2==1){
            if(arr[i]+arr[i+2]>arr[i+1]){
                arr[i+2]-=arr[i]+arr[i+2]-arr[i+1];
            }
        }else{
            if(min(arr[i],arr[i+2])<arr[i+1]){
                arr[i+1]-=arr[i+1]-min(arr[i],arr[i+2]);
            }
        }
    }
    if((n-1)%2==1){
        if(arr[n-1]>arr[n])arr[n-1]-=(arr[n-1]-arr[n]);
    }else{
        if(arr[n-1]<arr[n])arr[n]-=(arr[n]-arr[n-1]);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=brr[i]-arr[i];
        //cout<<arr[i]<<" ";
    }
    //cout<<endl;
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}