//
// Created by k0itoYuu on 2025/8/4.
//
#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
struct sd{
    int a,b;
};
sd arr[1000005];
int dp[1000005];
bool cmp(sd a,sd b){
    if(a.a==b.a)return a.b<b.b;
    else return a.a<b.a;
}
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i].a;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i].b;
    }
    sort(arr,arr+n,cmp);
    vector<sd>v;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp[arr[i].a]){
            mp[arr[i].a]=max(mp[arr[i].a],arr[i].b);
        }else{
            mp[arr[i].a]=arr[i].b;
        }
    }
    for(auto i:mp){
        //cout<<i.first<<" "<<i.second<<endl;
        v.push_back({i.first,i.second});
    }
    int now=0;
    int mm=INT_MAX;
//    for(int i=0;i<n;i++){
//        cout<<arr[i].a-arr[i].b<<" ";
//    }
//    cout<<endl;

    for(int i=1;i<=1000000;i++){
        while(i>=v[now].a&&now<v.size()){

            mm=min(v[now].a-v[now].b,mm);
            now++;
        }//cout<<mm<<endl;
        if(i-mm<0)continue;
        dp[i]=dp[i-mm]+2;
        //cout<<i<<" "<<dp[i]<<endl;
    }
    int ans=0;
//    for(int i=0;i<=10;i++)cout<<dp[i]<<" ";
//    cout<<endl;
    for(int i=0;i<m;i++){
        int c;
        cin>>c;
        if(c>1000000){
            ans+=((c-1000000)/mm+1)*2;
            c-=((c-1000000)/mm+1)*mm;
        }
        ans+=dp[c];
//        cout<<dp[c]<<endl;
    }
    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t=1;
    while(t--)solve();
}