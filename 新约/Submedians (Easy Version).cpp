//
// Created by k0itoYuu on 2025/8/18.
//
#include<bits/stdc++.h>
using namespace std;
int arr[300005];
int n,k,a,b,ans;
bool check(int m) {
    vector<int>v(n+5);
    for(int i=1;i<=n;i++){
        if(arr[i]>=m)v[i]=v[i-1]+1;
        else v[i]=v[i-1]-1;
    }
    int now=0;
    for(int i=k;i<=n;i++){
        if(v[i-k]<v[now])now=i-k;
        if(v[i]>=v[now]){
            a=now,b=i;
            ans=m;
            return 1;
        }
    }
    return 0;
}
void solve(){

    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int r=1,l=n;
    while(r<=l){
        int m=(l+r)/2;
        if(check(m)){
            r=m+1;
        }else{
            l=m-1;
        }
    }
    cout<<ans<<" "<<a+1<<" "<<b<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}