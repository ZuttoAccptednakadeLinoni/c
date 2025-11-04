//
// Created by k0itoYuu on 2025/7/4.
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
    int x,y;
    int a,b,c;
    cin>>x>>y;
    cin>>a>>b>>c;
    int fm,fz,nm=1,nz=1;
    int ans=0;
    int nxt=1;
    int exp=0;
    while(y>0&&x>0){
        //cout<<x<<" "<<y<<endl;
        if(x>=y){
            int q=(x)/y;
            //cout<<q<<endl;
            x-=q*y;
            fm=binpow(a+b,q);
            exp=(nxt*(1-binpow(b,q)*binpow(fm,mod-2ll)%mod+mod)%mod)%mod;
            nxt=(nxt*(binpow(b,q)*binpow(fm,mod-2ll)%mod)%mod)%mod;
            ans+=exp;
        }else{
            int q=(y)/x;
            y-=q*x;
            //cout<<q<<endl;
            fz=binpow(a,q);
            fm=binpow(a+b,q);
            exp=(nxt*(fz*binpow(fm,mod-2ll)%mod))%mod;
            if(y==0)ans+=exp;
            nxt=(nxt*(fz*binpow(fm,mod-2ll)%mod)%mod)%mod;
        }
        //cout<<exp<<endl;
        //cout<<"fz"<<fz<<"fm"<<fm<<"nz"<<nz<<"nm"<<nm<<"nxt"<<nxt<<endl;

        nxt%=mod;
        ans%=mod;
//        cout<<nxt<<" "<<fz<<" "<<binpow(fm,mod-2)<<" "<<((fz*binpow(fm,mod-2)+mod)%mod)<<endl;
//        cout<<nxt<<" "<<nz<<" "<<binpow(nm,mod-2)<<" "<<((nz*binpow(nm,mod-2)+mod)%mod)<<endl;
//        cout<<ans<<endl;
    }

    //cout<<fz<<" "<<fm<<endl;
    cout<<(ans+mod)%mod<<endl;
}

signed main(){
    int t;
    cin>>t;
    //cout<<(6811*binpow(10000,mod-2))%mod;
    while(t--)solve();
}
/*
3
1 1
2 2 6
1 3
2 3 6
3 4
7 3 15
 100000
167959139 481199252
18199423 25950409 149762920
 641009859 54748096
85739235 67050194 172255922
*/