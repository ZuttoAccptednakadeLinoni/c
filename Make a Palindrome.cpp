//
// Created by k0itoYuu on 2025/8/18.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int brr[200005];
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(brr+1,brr+1+n);
    vector<int>v;
    int f=1;
    for(int i=1;i<=n;i++){
        if(arr[i]<=brr[k])v.push_back(arr[i]);
    }
    int si=v.size();
    int l=0,r=v.size()-1;
    while(l<r){
        if(v[l]==v[r]){
            l++,r--;
        }else if(v[l]==brr[k]){
            l++;si--;
            if(si<k-1){
                f=0;
                break;
            }
        }else if(v[r]==brr[k]){
            r--;si--;
            if(si<k-1){
                f=0;
                break;
            }
        }else{
            f=0;break;
        }
    }
    if(f)cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}