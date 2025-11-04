//
// Created by k0itoYuu on 2025/10/11.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[arr[i]]++;
    }
    int ans=0;
    vector<int>v;
    int num=0;
    for(auto i:mp){
        ans+=i.second/2*i.first*2;
        num+=i.second/2*2;
        if(i.second%2!=0)v.push_back(i.first);
    }
    //cout<<ans<<endl;
    sort(v.rbegin(),v.rend());
    if(ans==0){
        cout<<0<<endl;
        return;
    }
    int f=0;
    int sum=ans;
    for(int i=0;i<(int)v.size()-1;i++){
        //cout<<i<<"!!"<<endl;
        if(v[i]<ans+v[i+1]){
            f=1;
            ans+=v[i];
            if(i!=v.size()-1)ans+=v[i+1];
            break;
        }
    }
    if(!v.empty()&&(v[v.size()-1]<sum)){
        ans=max(ans,sum+v[v.size()-1]);
        f=1;
    }
    if(f||num>2)cout<<ans<<endl;
    else cout<<0<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}