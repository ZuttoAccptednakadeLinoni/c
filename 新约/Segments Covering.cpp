//
// Created by k0itoYuu on 2025/7/30.
//
#include<bits/stdc++.h>
#define int long long
#define mod 998244353
using namespace std;
struct no{
    int nt,p;
};

int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res%mod;
}

vector<no>v[200005];
int dp[200005];
void solve(){
    int n,m;
    cin>>n>>m;
    int sum=1;
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        sum=sum*((d-c)*binpow(d,mod-2)%mod)%mod;
        sum%=mod;
        int x=(c*binpow(d,mod-2))%mod;
        int w=d*binpow(d-c,mod-2)%mod;
        v[a-1].push_back({b,x*w%mod});
    }
    queue<int>q;
    q.push(0);
    dp[0]=sum;
    for(int i=0;i<m;i++){
        for(auto j:v[i]){
            dp[j.nt]=dp[j.nt]+(j.p*dp[i])%mod;
            dp[j.nt]%=mod;
        }
    }
    cout<<dp[m]%mod<<endl;
}

signed main(){
    int t=1;
    while(t--)solve();
}