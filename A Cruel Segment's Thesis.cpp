//
// Created by k0itoYuu on 2025/9/16.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
#define pp pair<int,int>
pp arr[200005];
int qz1[200005];
int qz2[200005];
int qz3[200005];
bool cmp(pp a,pp b){
    return a.first+a.second<b.first+b.second;
}
void solve(){
    int n;
    cin>>n;
    int sum=0;
    int r=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i].first>>arr[i].second;
        sum+=arr[i].second-arr[i].first;
        r+=arr[i].second;
    }
    sort(arr+1,arr+n+1,cmp);

    for(int i=1;i<=n;i++){
        qz1[i]=qz1[i-1]+arr[i].second;
        qz2[i]=qz2[i-1]+arr[i].first+arr[i].second;
    }
    int ans=0;
    if(n%2==0){
         ans=qz1[n]-qz2[n/2];
    }else{
        for(int i=1;i<=n;i++){
            int w;
            if(i<=n/2)w=qz1[n]-arr[i].second-qz2[n/2+1]+arr[i].first+arr[i].second;
            else w=qz1[n]-arr[i].second-qz2[n/2];
            //cout<<qz1[n]-arr[i].second<<" "<<-(-qz2[n/2+1]+arr[i].first+arr[i].second)<<"||";
            //cout<<i<<" "<<w<<endl;
            ans=max(ans,w);
        }
    }
    cout<<ans+sum<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}