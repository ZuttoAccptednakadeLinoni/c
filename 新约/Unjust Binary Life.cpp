//
// Created by k0itoYuu on 2025/8/11.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
int brr[200005];
int qza[200005];
int qzb[200005];
#define pp pair<int,int>
void solve(){
    int n;
    cin>>n;
    vector<pp>v;
    v.clear();
    for(int i=1;i<=n;i++){
        char c;
        cin>>c;
        if(c=='1')arr[i]=1;
        else arr[i]=-1;
        qza[i]=qza[i-1]+arr[i];
        v.push_back({qza[i],0});
    }
    for(int i=1;i<=n;i++){
        char c;
        cin>>c;
        if(c=='1')brr[i]=1;
        else brr[i]=-1;
        qzb[i]=qzb[i-1]+brr[i];
        v.push_back({-qzb[i],1});
    }

    sort(v.begin(),v.end());
    int x=0;
    int ans=0;
    int now=0;
    int a=0,b=0;
    for(auto i :v){
        //cout<<a<<" "<<b<<" |"<<i.first<<" "<<i.second<<endl;
        if(i.second==0){
            ans+=i.first*b;
            ans-=i.first*(n-b);
            a++;
        }else{
            ans+=i.first*a;
            ans-=i.first*(n-a);
            b++;
        }
        //cout<<ans<<endl;
    }
    //cout<<ans<<endl;
    cout<<(n*(n+1)*n-ans)/2<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}