//
// Created by k0itoYuu on 2025/8/5.
//
#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define mod 998244353
int binpow(int a, int b) {
    int res = 1;
    a=a%mod;
    while (b > 0ll) {
        if (b & 1ll) res = (res * a%mod)%mod;
        a = (a * a)%mod;
        b >>= 1;//cout<<res<<endl;
    }
    //
    return res%mod;
}
long long qpowp(long long a,long long b){
    long long ans = 1;
    a%=mod;
    while(b){
        if(b&1) ans = (ans*a%mod)%mod;
        a = a*a%mod;
        b>>=1;
    }
    return ans%mod;
}
int solve(int a,int b,int c,int d){
    //cout<<a<<b<<c<<d;
    if(b>d){
        swap(a,c);
        swap(b,d);
    }
    int e=__gcd(a,c);
    //cout<<e<<endl;
    if(e==1)return 1ll;

    return (binpow(e,b)*solve(a/e,b,e,d-b))%mod;
}

signed main() {
    int t;
    cin>>t;
    while(t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<solve(a,b,c,d)<<endl;
    }
}