//
// Created by k0itoYuu on 2025/7/20.
//
#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans=0;int a,b,c,d;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c>>d;

        if(b>d&&a!=0ll){
            if(b>d)ans+=min(a,c);
        }
        ans+=max(0ll,a-c);
        ans+=max(0ll,b-d);
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;

}

signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
}
/*
3
1 1 2 0
0 2 0 2
1 0 0 1
*/