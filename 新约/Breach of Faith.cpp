//
// Created by k0itoYuu on 2025/7/3.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
long long arr[400005];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    long long ans=0;
    ans+=arr[2*(n-1)]+arr[2*n-1];
    vector<int>j;
    vector<int>o;
    for(int i=0;i<2*(n-1);i++){
        if(i%2==1){
            ans-=arr[i];
            o.push_back(arr[i]);
        }
        else { ans += arr[i]; j.push_back(arr[i]);}
    }
    j.push_back(arr[2*(n-1)]);
    j.push_back(arr[2*n-1]);
    o.push_back(ans);
    //cout<<1<<endl;
    auto itj=j.begin();
    auto ito=o.begin();
    for(int i=0;i<2*n+1;i++){
        if(i%2==0){
            cout<<*itj<<" ";
            itj++;
        }
        else { cout<<*ito<<" ";ito++;}
    }

}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}