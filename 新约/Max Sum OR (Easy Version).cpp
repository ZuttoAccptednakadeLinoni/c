//
// Created by k0itoYuu on 2025/9/21.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int f(int i) {
    if (i==0)return 1;
    return log2(i)+1;
}
void solve(){
    int l,r;
    cin>>l>>r;
    int e=r;
    if (r==0) {
        cout << 0 << endl<<0 << endl;
        return;
    }
    vector<int>ans(r+1,-1);
    int p = f(r);
    for (int i = r;i>=0;i--) {
        p =f(i);
        int x = ((1<<(p))-1-i);
        if (ans[i]==-1) {
            if (i==0) {
                ans[i]=0;
                break;
            }
            ans[x] = i;
            ans[i] = x;
        }
    }
    int sum=0;
//    for(int i=1;i<=e;i++){
//        sum+=(i|ans[i]);
//    }
//    cout<<sum<<endl;
    cout<<e*(e+1)<<endl;
    for(int i=0;i<=e;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}