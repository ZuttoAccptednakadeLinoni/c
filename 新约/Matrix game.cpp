//
// Created by k0itoYuu on 2025/7/3.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
int fastpow (int a, int b)
{
    int r = 1;
    while (b)
    {
        if (b & 1) r = r * a % mod;
        a = a * a % mod; b >>= 1;
    }
    return r;
}
void solve(){
    int a,b,k;
    cin>>a>>b>>k;
    int n=(a-1)*k+1;
    n=n%mod;
    int m=1;
    for(int i=1;i<=a;i++){
        m=m*fastpow(i, mod-2) % mod * ((n-i+1+mod) % mod) % mod;
    }
    m = (m * k % mod * (b-1) % mod + 1)%mod;
    cout<<n<<" "<<m<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}