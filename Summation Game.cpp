//
// Created by k0itoYuu on 2025/5/22.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int qz[200005];
void solve(){
    int n,x,k;
    cin>>n>>x>>k;
    qz[0]=0;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        qz[i]=0;
    }
    sort(arr+1,arr+n+1);
    for (int i=1;i<=n;i++){

        qz[i]=qz[i-1]+arr[i];
    }
    int ans=qz[n]-2*(qz[n]-qz[n-k]);
    //cout<<"!!!"<<ans<<" "<<qz[n]<<" "<<(qz[n]-qz[n-k])<<endl;
    for (int i=n;i>=n-x;i--){
        //cout<<i<<endl;
        //cout<<qz[i]<<" "<< 2*(qz[i]-qz[max(i-k,0)])<<endl;
        ans=max(qz[i]-2*(qz[i]-qz[max(i-k,0)]),ans);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}