//
// Created by k0itoYuu on 2025/8/28.
//
#include<bits/stdc++.h>
using namespace std;
int arr[300005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int ans=-1;
    for(int i=2;i<=n;i++){
        if(arr[i]!=arr[i-1]){
            ans=i-1;
            break;
        }
    }
    //cout<<ans<<endl;
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i+1]){
            ans=min(ans,n-i);
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}