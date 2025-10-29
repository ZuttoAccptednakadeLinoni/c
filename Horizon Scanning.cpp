//
// Created by k0itoYuu on 2025/7/8.
//
#include<bits/stdc++.h>
using namespace std;
double arr[400005];
const double pi=3.141592653;
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr[i]=atan2(x,y);
    }

    double ans=0;
    sort(arr,arr+n);
    for(int i=n;i<2*n;i++){
        arr[i]=arr[i-n]+2*pi;
    }
    for(int i=0;i<n;i++){
        //cout<<arr[i+k]-arr[i]<<endl;
        ans=max(ans,arr[i+k]-arr[i]);
    }
    printf("%.6f\n",ans);
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}