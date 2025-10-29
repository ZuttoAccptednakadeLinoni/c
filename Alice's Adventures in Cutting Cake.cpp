//
// Created by k0itoYuu on 2025/8/3.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
int dpq[200005];
int dph[200005];
int qz[200005];
void solve(){
    int n,m,v;
    cin>>n>>m>>v;
    int sum=0;
    qz[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        qz[i]=qz[i-1]+arr[i];
    }
    int s=0;
    for(int i=1;i<=n;i++){
        s+=arr[i];
        //cout<<s<<endl;
        if(s>=v){
            dpq[i]=dpq[i-1]+1;
            s=0;
        }
        else {
            dpq[i]=dpq[i-1];
        }
    }
    s=0;
    dph[n+1]=0;
    map<int,int>mp;
    for(int i=n;i>=1;i--){
        s+=arr[i];
        if(s>=v){
            dph[i]=dph[i+1]+1;
            s=0;
        }
        else {
            dph[i]=dph[i+1];
        }
        if(mp.find(dph[i])==mp.end()){
            mp[dph[i]]=i;
        }
    }mp[0]=n+1;
//    for(int i=1;i<=n;i++){
//        cout<<dpq[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=1;i<=n;i++){
//        cout<<dph[i]<<" ";
//    }
//    cout<<endl<<endl;
//    for(auto i:mp){
//        cout<<i.first<<" "<<i.second<<endl;
//    }
    //cout<<endl;
    int ans=-1;

    for(int i=1;i<=n;i++){
        if(mp.find(m-dpq[i-1])!=mp.end()){
            //cout<<mp[m-dpq[i-1]]<<" "<<qz[i-1]<<endl;
            ans=max(ans,qz[mp[m-dpq[i-1]]-1]-qz[i-1]);
        }
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}