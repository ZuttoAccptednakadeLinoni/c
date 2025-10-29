//
// Created by k0itoYuu on 2025/8/3.
//
#include<bits/stdc++.h>
using namespace std;
int fa[6006];
int find(int x){
    if(fa[x]==x) return x;
    return fa[x]=find(fa[x]);
}
void unset(int x,int y){
    fa[find(x)]=find(y);
}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        fa[i]=i;
    }
    vector<int>ans;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        if(find(a)!=find(b)){
            ans.push_back(i);
            fa[find(a)]=find(b);
        }

    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}