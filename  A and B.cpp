//
// Created by k0itoYuu on 2025/9/25.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>aa;
    vector<int>bb;
    for(int i=1;i<=n;i++){
        char c;
        cin>>c;
        if(c=='a')aa.push_back(i);
        else bb.push_back(i);
    }
    if(aa.empty()||bb.empty()){
        cout<<0<<endl;
        return;
    }
    int q=aa[(aa.size()-1)/2];
    int ansa=0;
    for(int i=(aa.size()-1)/2;i<aa.size();i++){
        if(aa[i]!=q)ansa+=aa[i]-q;
        q++;
    }
    q=aa[(aa.size()-1)/2];
    for(int i=(aa.size()-1)/2;i>=0;i--){
        if(aa[i]!=q)ansa+=q-aa[i];
        q--;
    }
    q=bb[(bb.size()-1)/2];
    int ansb=0;
    for(int i=(bb.size()-1)/2;i<bb.size();i++){
        if(bb[i]!=q)ansb+=bb[i]-q;
        q++;
    }q=bb[(bb.size()-1)/2];
    for(int i=(bb.size()-1)/2;i>=0;i--){
        if(bb[i]!=q)ansb+=q-bb[i];
        q--;
    }
    cout<<min(ansa,ansb)<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}