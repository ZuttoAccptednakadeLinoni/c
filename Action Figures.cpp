//
// Created by k0itoYuu on 2025/7/3.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    char c;
    priority_queue<int>o;
    priority_queue<int>l;
    for(int i=0;i<n;i++){
        cin>>c;
        //cout<<c<<endl;
        if(c=='1')l.push(i+1);
        else o.push(i+1);
    }
    int ans=0;
    while(!o.empty()&&!l.empty()){
        //cout<<l.top()<<"l"<<endl;
        l.pop();
        if(l.top()>o.top()){
            ans+=o.top();
            o.pop();
            continue;
        }
        while(o.top()>l.top()&&!o.empty()){
            //cout<<o.top();
            ans+=o.top();
            o.pop();
        }
        //cout<<endl;
    }
    int q=l.size();
    //cout<<q<<endl;
    while(!o.empty()){
        //cout<<o.top();
        ans+=o.top();
        o.pop();
    }
    //cout<<q<<endl;
    for(int i=0;i<q/2;i++)l.pop();
    while(!l.empty()){
        //cout<<l.top();
        ans+=l.top();
        l.pop();
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}