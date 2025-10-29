//
// Created by k0itoYuu on 2025/8/4.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pp pair<int,int>
#define a first
#define b second
pp arr[200005];

void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i].a;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i].b;
    }
    sort(arr,arr+n);
    int ans=0;
    int l=0,r=arr[n-1].a;
    while(l<=r){

       int m=(l+r)/2;//cout<<"m"<<m<<endl;
       int w=0;
       int e=0;
       int nd=0;
       for(int i=n-1;i>=0;i--){
           if(arr[i].a<m)break;
           int f=(arr[i].a-m)/arr[i].b+((arr[i].a-m)%arr[i].b!=0);
           if((arr[i].a-m)%arr[i].b==0)nd++;
           int aa=arr[i].a,bb=arr[i].b;
           //cout<<arr[i].a<<" "<<arr[i].b<<" "<<"f"<<f<<endl;
           if(f*arr[i].b>arr[i].a)w+=aa*(f-1)-bb*max(0ll,(f-2))*(f-1)/2+aa-bb*(f-1);
           else w+=aa*(f)-bb*(f)*(f-1)/2;
           e+=f;
       }
       if(e>k){
           l=m+1;
       }else{
           ans=max(ans,w+min((k-e),nd)*m);
           //cout<<"ans"<<ans<<endl;
           r=m-1;

       }
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}