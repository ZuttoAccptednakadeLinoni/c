//
// Created by k0itoYuu on 2025/9/29.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
int check(int m){
    int w=k/(m+1)+(k%(m+1)!=0);
    int e=(k%(m+1));
    int sum=(1+w)*w/2*e+(1+w-((k%(m+1))!=0))*(w-((k%(m+1))!=0))/2*(m+1-e);
    //cout<<(1+w)*w/2*(m+1)<<" "<<((k%(m+1))!=0)*(w+1)<<endl;
    //cout<<sum<<endl;
    if(sum<n+m)return k+m;
    else return 0;
}
void solve(){

    cin>>n>>k;
    int l=0,r=k+2;
    int ans=0;
    while(l<=r){
        int m=(l+r)/2;
        int q=check(m);
        //cout<<m<<endl;
        if(q){
            ans=q;
            r=m-1;
        }else{
            l=m+1;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}