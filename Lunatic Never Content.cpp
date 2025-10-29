//
// Created by k0itoYuu on 2025/5/21.
//
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    int ans=0;
    for(int i=1;i<=n/2;i++){
        if(arr[i]==arr[n-i+1])continue;
            if(ans==0)ans=abs(arr[i]-arr[n-i+1]);
            ans=__gcd(ans,abs(arr[i]-arr[n-i+1]));

        //		cout<<ans<<endl;
    }

    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}