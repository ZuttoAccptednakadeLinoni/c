#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<set<int> >ve(n+1);
    map<int,int>mp;
    for (int i=1;i<=n;i++) {
        int x;
        cin>>x;
        for (int j=1;j<=x;j++) {
            int q;
            cin>>q;
            ve[i].insert(q);
        }
        for (auto u : ve[i])mp[u]++;
    }
    int ans=0;
    if (mp.size()!=m) {
        cout << "No" << endl;
        return;
    }else {
        for (int i=1;i<=n;i++) {
            int p=0;
            for (auto it:ve[i]) {
                if (mp[it]==1) {
                    p = 1;
                }
            }
            if(p==0)ans++;
        }
    }
    if(ans>=2){
        cout <<"Yes"<< endl;
    }
    else{
        cout<<"No"<< endl;
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}