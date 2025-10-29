//
// Created by k0itoYuu on 2025/5/15.
//
#include<bits/stdc++.h>
using namespace std;

int p[200005];
bool b[200005];



void solve(){
    int n;
    cin>>n;
    int q;
    vector<int>arr;
    arr.push_back(-1);
    for (int i=1;i<=n;i++){
        cin>>q;
        if (q==arr[arr.size()-1])continue;
        arr.push_back(q);
    }
    arr.push_back(-1);
    int ans=0;
    //cout<<arr.size();
    // if (arr.size()==3){
    //     cout<<1<<endl;
    //     return;
    // }
    for (int i=1;i<=arr.size()-2;i++){
        //cout<<arr[i]<<" ";
        if (arr[i]>arr[i-1]&&arr[i]>arr[i+1])ans++;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}