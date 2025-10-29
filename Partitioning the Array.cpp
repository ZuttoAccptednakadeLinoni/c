//
// Created by k0itoYuu on 2025/5/26.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];int n;
int so(int k){

    //if (k==1)return 0;
    int g=0;
    for (int i=1;i<=k;i++){

        for (int j=i+k;j<=n;j+=k){
            int q=abs(arr[j]-arr[j-k]);
            if (g==0)g=q;
            else g=__gcd(g,q);
            if (g==1)return 0;
        }

    }
    //cout<<k<<endl;
    return 1;
}
void solve(){

    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for (int i=1;i*i<=n;i++){
        if (n%i==0){
            ans+=so(i);
        }
        if (n%(n/i)==0&&(i*i!=n)){
            ans+=so((n/i));
        }
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}