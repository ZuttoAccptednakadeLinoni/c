//
// Created by k0itoYuu on 2025/7/14.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
struct pd{
    int u,d,m;
};
#define pp pair<int,int>
vector<pp>ve[200005];
int arr[200005];int n,m;
vector<int>dp(200005);
bool ck(int x){

    for(int i=1;i<=n;i++)dp[i]=-1;
    dp[1]=arr[1];
    for(int i=1;i<=n;i++){
        for(auto j :ve[i]){
            if(j.second<=dp[i]&&j.second<=x){
                dp[j.first]=dp[i]+arr[j.first];
            }
        }
    }
    return dp[n]>=0;
}
void solve(){

    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        ve[i].clear();
    }
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        ve[u].push_back({v, w});

    }
    int l=0,r=1000000000;

    int ans=-1;
    while(l<=r){
        int mm=(l+r)/2;
        //cout<<l<<" "<<mm<<" "<<r<<" "<<endl;
        if(ck(mm)){
            ans=mm;
            r=mm-1;
            //cout<<ans<<endl;
        }else{
            l=mm+1;
        }
    }
//    queue<pd>q;
//    q.push({1,0,0});
//    while(!q.empty()){
//        auto a=q.front();
//        //cout<<a.u<<endl;
//        q.pop();
//        if(a.u==n)ans=min(ans,a.m);
//        for(auto i:ve[a.u]){
//            if(i.second<=a.d+arr[a.u]){
//                q.push({i.first,a.d+arr[a.u],max(a.m,i.second)});
//            }
//
//        }
//    }
//    if(ans==INT_MAX)ans=-1;
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}