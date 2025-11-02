//
// Created by k0itoYuu on 2025/11/2.
//
#include<bits/stdc++.h>
using namespace std;

int arr[200005];

signed main(){
    int t;
    cin>>t;

    int ans=INT_MAX;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int f=1;
    sort(arr,arr+t);
    for(int i=0;i<t;i++){
        if(arr[0]<=(arr[i]/2-((arr[i]+1)%2))||arr[i]%arr[0]==0){

        }
        else f=0;
    }
    if(f)cout<<arr[0]<<endl;
    else cout<<arr[0]/2<<endl;

}
//6 8
//5 6