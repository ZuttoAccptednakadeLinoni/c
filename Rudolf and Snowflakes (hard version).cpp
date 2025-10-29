//
// Created by k0itoYuu on 2025/6/23.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
typedef long long LL;
LL quick_pow(LL a, LL b){
    LL ans = 1;
    while(b){
        if(b & 1)ans =(ans*a);
        b >>= 1;
        a = (a*a);
    }
    return ans;

}
void solve(){
    int n;
    cin>>n;int ans=-1;
    for (int i=2;i<=64;i++){

        cout<<i<<"!!!!!"<<endl;
        int l=1;
        int r=pow((double)1e18, (double)1/(i+1));
        r=max(2ll,r);
        int m;
        cout<<r<<endl;
        while (l<=r){
            m=(l+r)/2;
            if (m==1){
                l=m+1;
                continue;
            }
            int qq=quick_pow(m,i+1)-1;
            // if (qq<0){
            //     r=m-1;
            //     continue;
            // }
            cout<<m<<" "<<qq+1<<" "<<qq/(m-1)<<endl;
            if (qq==n*(m-1)&&(qq%(m-1)==0)){
                ans=m;
                break;
            }
            else if (qq<n*(m-1)){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        if (ans!=-1){
            cout<<"YES\n";
            return;
        }
    }

    cout<<"NO\n";
}

signed main(){
    int t;
    cin>>t;
    //cout<<quick_pow(2,63)-1;
    while (t--)solve();
}