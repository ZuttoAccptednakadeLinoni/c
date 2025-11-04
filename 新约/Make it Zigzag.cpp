//
// Created by k0itoYuu on 2025/10/20.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int m=0;
    arr[0]=INT_MAX;
    arr[n+1]=INT_MAX;
    for(int i=1;i<=n;i++){
        m=max(m,arr[i]);
        if(i%2==0)arr[i]=m;

    }
    int ans=0;
//    for(int i=1;i<=n;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
    for(int i=1;i<=n;i+=2){
        ans+=max(0,arr[i]-min(arr[i-1],arr[i+1])+1);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}