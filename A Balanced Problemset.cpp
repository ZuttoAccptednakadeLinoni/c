//
// Created by k0itoYuu on 2025/5/24.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int ans=1;
    if (k==1){
        cout<<n<<endl;
        return;
    }
    for (int i=1;i*i<=n;i++){
        //cout<<i<<endl;
        if (n%i==0){
            if (n-i*(k-1)>0)ans=max(ans,i);
        }
        //cout<<(n/i)*(k-1)<<endl;
        if (n%(n/i)==0)if (n-(n/i)*(k-1)>0)ans=max(ans,(n/i));
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}
