//
// Created by k0itoYuu on 2025/8/24.
//
#include<bits/stdc++.h>
using namespace std;
int c[200005];
vector<int>v[200005];
void dfs(int i){
    if(v[i].empty()){
        c[i]=1;
        return;
    }
    int cl=0;
    for(auto u :v[i]){
        dfs(u);
        cl=cl|c[u];
    }
    if(cl==1)c[i]=0;
    else c[i]=1;
}
void solve(){
    int n;
    cin>>n;
    int q;
    for(int i=1;i<=n;i++){
        v[i].clear();
        c[i]=0;
    }
    for(int i=2;i<=n;i++){
        cin>>q;
        v[q].push_back(i);
    }
    dfs(1);
    cout<<"Yes\n";
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
        if(c[i]==1)cout<<i<<" "<<1<<endl;
        else cout<<1<<" "<<i<<endl;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)solve();
}
/*
2
3
1 2
5
1 1 2 2
*/