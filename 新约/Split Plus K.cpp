//
// Created by k0itoYuu on 2025/8/9.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
void solve(){
    int n,k;
    cin>>n>>k;
    int g=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int ans=0;
    int f;
    sort(arr,arr+n);
    if(arr[0]==arr[n-1]){
        cout<<0<<endl;
        return;
    }
    if(arr[0]-k<0)f=0;
    else f=1;
    for(int i=0;i<n;i++){
        if(f){
            if(arr[i]-k<=0){
                cout<<-1<<endl;return;
            }
        }else{
            if(arr[i]-k>=0){
                cout<<-1<<endl;return;
            }
        }
        g=__gcd(g,abs(arr[i]-k));
    }
    if(g==0){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        ans+=abs((arr[i]-k)/g)-1;

    }
    cout<<abs(ans)<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}