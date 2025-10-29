//
// Created by k0itoYuu on 2025/6/15.
//
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5,P=256;
int n,a[N],x[N],q[1<<9],ans,temp;
void solve(){
    cin>>n;ans=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) x[i]=x[i-1]^a[i];
    for(int i=0;i<=n;i++) q[x[i]]=temp;
    for(int i=0;i<=n;i++) for(int p=0;p<P;p++) if(q[p]==temp) ans=max(ans,x[i]^p);
    cout<<ans<<endl;
}
signed main(){
    int T;
    cin>>T;

    for(temp=1;temp<=T;temp++) solve();
    return 0;
}