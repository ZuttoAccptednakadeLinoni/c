//
// Created by k0itoYuu on 2025/8/19.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
int s[200005];int n,l,r;
int ask(int m){
    if(m<=n)return arr[m];
    if(m<=2*n)return s[m/2];
    if((m/2-n)&1ll)return s[n]^ask(m/2ll);
    return s[n];
}
void solve(){
    cin>>n>>l>>r;
    //cout<<n<<l<<r<<endl;
    int q;
    s[0]=0;
    arr[n+1]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        s[i]=s[i-1]^arr[i];
    }

    if(n%2==0){
        arr[n+1]=s[(n+1)/2];
        n++;
        s[n]=s[n-1]^arr[n];
    }//cout<<1<<"!!"<<endl;
    cout<<ask(l)<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}