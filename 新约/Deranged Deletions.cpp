//
// Created by k0itoYuu on 2025/7/8.
//
#include<bits/stdc++.h>
using namespace std;
int arr[105];
int brr[105];
int vis[105];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i]=arr[i];
        vis[i]=0;
    }
    sort(brr,brr+n);
    int f=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(arr[i]==brr[i]){
            v.push_back(i);
            vis[i]=1;
        }
    }
    if(v.size()==n)cout<<"no\n";
    else{

        cout<<"yes\n";

        cout<<n-v.size()<<endl;
        for(int i=0;i<n;i++){
            if(vis[i])continue;
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}