//
// Created by k0itoYuu on 2025/7/25.
//
#include<bits/stdc++.h>
using namespace std;
int arr[400005];
int ans[400005];
void solve(){
    int n;
    cin>>n;
    memset(ans,0,sizeof(ans));
    memset(arr,0,sizeof(arr));
    string s;
    cin>>s;

    int sum=0;
    for(int i=n;i>=1;i--)ans[i]=ans[i+1]+(s[n-i]-'0');
    for(int i=1;i<=n;i++){
        ans[i+1]+=ans[i]/10;
        ans[i]%=10;
    }
    while(ans[n+1]!=0) n++;
    while(ans[n]==0) n--;
    for(int i=n;i>=1;i--) cout<<ans[i];
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}