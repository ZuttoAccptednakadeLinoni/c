//
// Created by k0itoYuu on 2025/7/27.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[200005];
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s=" "+s;
    int ans=0;
    ans+=n*(n+1)*(n+2)/6;
    arr[0]=0;
    for(int i=1;i<=n;i++){
        if(s[i]=='0')arr[i]=arr[i-1]-1;
        else arr[i]=arr[i-1]+1;
        //cout<<arr[i]<<endl;
    }
    //cout<<ans<<endl;
    sort(arr,arr+1+n);
    for(int i=0;i<=n;i++){
        ans+=(2*i-n)*arr[i];
    }
    cout<<ans/2<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}