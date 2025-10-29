//
// Created by k0itoYuu on 2025/10/15.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    vector<int>ans(2*n+5);
    map<int,int>mp;
    for(int i=1;i<=2*n;i++){
        cout<<"? "<<v1.size()+1<<" ";
        if(!v1.empty()){
            for(auto j:v1)cout<<j<<" ";

        }
        cout<<i<<endl;
        int q;
        cin>>q;
        if(q!=0){
            ans[i]=q;
            v2.push_back(i);
            mp[i]=1;
        }else v1.push_back(i);
    }
    for(int i=1;i<=2*n;i++){
        if(!mp[i]){
            cout<<"? "<<v1.size()+1<<" ";
            for(auto j:v2)cout<<j<<" ";
            cout<<i<<endl;
            int q;
            cin>>q;
            ans[i]=q;
        }

    }
    cout<<"! ";
    for(int i=1;i<=2*n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}