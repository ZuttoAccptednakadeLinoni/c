//
// Created by k0itoYuu on 2025/9/21.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int,int>m;
    m.clear();
    for(int i=1;i<=n;i++){
        int q;
        cin>>q;
        m[q]++;
    }
    int ans=0;
    for(int i=1;i<=100;i++){
        int f=1;
        int e=0;
        for(auto j:m){
            if(j.second<i){
                continue;
            }else e+=i;
        }
        ans=max(ans,e);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}