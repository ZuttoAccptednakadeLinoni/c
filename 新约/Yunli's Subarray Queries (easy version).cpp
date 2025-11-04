//
// Created by k0itoYuu on 2025/9/2.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int brr[200005];
bool com(pair<int,int> le,pair<int,int> ri)
{
    return le.second < ri.second;

}
void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]-=i;
        //cout<<arr[i]<<" ";
    }
    //cout<<endl;
    map<int,int>mp;
    for(int i=1;i<=k;i++){
        mp[arr[i]]++;
    }
    multiset<int>s;
    for(auto i:mp){

        s.insert(i.second);
    }
//    for(auto i:s){
//
//        cout<<i<<" ";
//    }
    //cout<<endl;
    brr[1]=*s.rbegin();
    //cout<<brr[1]<<" \n";
    for(int i=2;i<=n-k+1;i++){
        //cout<<i-1<<" "<<i+k-1<<" ";
        int a=mp[arr[i-1]];
        if(s.find(a)!=s.end())s.erase(s.find(a));
        mp[arr[i-1]]--;
        s.insert(a-1);
        a=mp[arr[i+k-1]];
        if(s.find(a)!=s.end())s.erase(s.find(a));
        mp[arr[i+k-1]]++;
        s.insert(a+1);
        brr[i]=*s.rbegin();
        //cout<<brr[i]<<" ";
        //cout<<endl;
//        for(auto i:s){
//
//            cout<<i<<" ";
//        }
//        cout<<endl;
    }
    //cout<<endl;
    while(q--){
        int i,j;
        cin>>i>>j;
        cout<<k-brr[i]<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}