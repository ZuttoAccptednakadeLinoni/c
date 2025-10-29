//
// Created by k0itoYuu on 2025/5/14.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

int arr[100005];

signed main(){
    int n;
    cin>>n;
    int sum=0;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if (sum!=(1+n)*n/2){
        cout<<-1;
        return 0;
    }
    sort(arr+1,arr+n+1);
    int ans=0;
    for (int i=1;i<=n;i++){
        //cout<<arr[i]<<" ";
        if (arr[i]!=i)ans+=abs(arr[i]-i);
    }
    cout<<ans/2;
}
