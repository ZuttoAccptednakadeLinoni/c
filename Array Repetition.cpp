//
// Created by k0itoYuu on 2025/6/22.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int si[200005];
int pre[200005];
int find(int lst,int x){

}
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>arr;
    vector<int>brr;
    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;arr.push_back(b);
        if (b==1){
            si[i]=si[i-1]+1;
            pre[i]=pre[i-1];
        }
        else {
            si[i]=si[i-1]*b;
            pre[i]=i;
        }
    }
    for (int i=0;i<q;i++){
        int l=0,r=brr.size()-1;
        int w;
        cin>>w;
        find(w);
    }
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();

}