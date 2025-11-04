//
// Created by k0itoYuu on 2025/7/17.
//
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[k-1])v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    int now=arr[k-1];
    int w=0;
//    for(auto i:v)cout<<i<<" ";
    cout<<endl;
    for(auto i:v){
//        cout<<i<<" "<<now<<" "<<w<<" "<<endl;
        if(i-now<=now-w){
            w+=(i-now);
            now=i;
        }else {
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}