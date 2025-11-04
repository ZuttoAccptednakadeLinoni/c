//
// Created by k0itoYuu on 2025/10/9.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
void solve(){
    int n;
    cin>>n;
    int w=0;
    int ans=1,add=0;
    int f=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]!=0)f=1;
    }
//    if(!f){
//        cout<<1<<endl;
//        return;
//    }
    for(int i=1;i<=n;i++){
        int q;
        q=arr[i];
        if(arr[i]>arr[i-1]){
            ans+=arr[i]-arr[i-1]+1;
        }
//        cout<<w<<" "<<q<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    t=1;
    while(t--)solve();
}