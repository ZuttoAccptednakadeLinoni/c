//
// Created by k0itoYuu on 2025/6/22.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
    int n,x;
    cin>>n>>x;int ans=0;
    for (int i=1;i<=n;i++){
        cin>>arr[i];if (arr[i]==x)ans=i;
    }

    int l=1,r=n+1;
    while (r-l!=1){
        int m=(l+r)/2;

        if (arr[m]<=x)l=m;
        else r=m;
    }
    if (arr[l]==x)cout<<0<<endl;
    else cout<<1<<"\n"<<l<<" "<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}