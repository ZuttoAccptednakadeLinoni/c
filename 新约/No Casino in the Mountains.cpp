//
// Created by k0itoYuu on 2025/7/17.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int f=1;
    int ans=0;
    int e=0;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        if(q==0&&f)e++;
        else {
            e=0;
            f=1;
        }
        if(e==k){
            ans++;
            //cout<<i<<endl;
            f=0;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}