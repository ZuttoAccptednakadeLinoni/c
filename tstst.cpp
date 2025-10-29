//
// Created by k0itoYuu on 2025/8/1.
//
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int arr[100005];
int gq[100005];
int gh[100005];
int nxt[100005];
void solve(){
    int n;
    cin>>n;
    int f=1;
    cin>>arr[1];
    int ans=0;
    for(int i=2;i<=n;i++){
        cin>>arr[i];
        if(arr[i]!=arr[i-1])f=0;
    }
    arr[n+1]=0;
    if(f){
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<=n-2;i++){
        ans=__gcd(ans,abs(arr[i]-arr[i+1]));
    }
    for(int i=1;i<=n;i++){
        gq[i]=__gcd(gq[i-1],arr[i]);//cout<<gq[i]<<" ";
    }
    //cout<<endl;
    gh[n+1]=0;
    for(int i=n;i>=1;i--){
        gh[i]=__gcd(gh[i+1],arr[i]);
        //cout<<gh[i]<<" ";
    }
    ans=max(ans,gq[n]);
    //cout<<endl;
    nxt[n]=n;
    for(int i=n;i>=2;i--){
        if(gq[i-1]>gq[i])nxt[i-1]=i-1;
        else nxt[i-1]=nxt[i];

    }
    //cout<<endl;

    nxt[0]=0;
    for(int j=1;j<=n+1;j++){
        //cout<<"J"<<j<<endl;
        for(int i=0;i<j;i++){
            i=nxt[i];
            //cout<<i<<endl;
            int g=0;
            for(int l=i+1;l<j-1;l++){
                //cout<<abs(arr[l]-arr[l+1])<<" ";
                g=__gcd(g,abs(arr[l]-arr[l+1]));
            }
            //cout<<endl;
            //cout<<"G"<<g<<" "<<gq[i]<<" "<<gh[j]<<endl;
            ans=max(ans,__gcd(gh[j],__gcd(g,gq[i])));
            //cout<<"ans"<<ans<<endl;
        }
    }
    for(int i=0;i<=n;i++){
        i=nxt[i];
        int g=0;
        if(i>2){
            for(int j=2;j<i-1;j++){
                g=__gcd(g,abs(arr[j]-arr[j+1]));
            }
            ans=max(ans,__gcd(g,gh[i]));
            continue;
        }
        ans=max(ans,gh[i]);
    }
    cout<<ans<<endl;
}

int main(){
//    ios::sync_with_stdio(true);
    int t;
    cin>>t;
    while(t--)solve();
}
/*
1
5
6 1 4 7 9
1

5

3 6 9 12 1
 */