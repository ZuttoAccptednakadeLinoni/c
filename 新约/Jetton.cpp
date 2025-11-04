//
// Created by k0itoYuu on 2025/7/22.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353
int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res%mod;
}
void solve(){
    int a,b;
    cin>>a>>b;
    int g=__gcd(a,b);
    a/=g,b/=g;
    int f=0;
    //cout<<a<<" "<<b<<endl;
    for(int i=0;i<31;i++){
        if((a+b)==(1<<i)){
            f=1;
            break;
        }
    }
    int ans=0;
    if(f){
        while(true){
            //cout<<a<<" "<<b<<endl;
            if(a==b)break;
            for(int i=1;i<=30;i++){
                if(a*binpow(2,i)>=b-a*binpow(2,i)+a){
                    b=b-a*binpow(2,i)+a;
                    a=a*binpow(2,i);

                    ans+=i;
                    break;
                }
            }
            g=__gcd(a,b);
            a/=g,b/=g;
            if(a>b)swap(a,b);
        }
        cout<<ans+1<<endl;
    }else{
        cout<<-1<<endl;
        return;
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}