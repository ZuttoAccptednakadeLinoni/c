//
// Created by k0itoYuu on 2025/7/8.
//
#include<bits/stdc++.h>
using namespace std;
int arr[600005];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }int b=0;
    int  g=0;

    int ans=1;
    //cout<<1/1<<endl;
    int q=1;
    for(int i=n-1;i>=0;i--){
        g=__gcd(g,arr[i]);
        q= lcm(q,arr[i]/g);
    }
    cout<<q<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
1
5
42 42 14 168 28
 */