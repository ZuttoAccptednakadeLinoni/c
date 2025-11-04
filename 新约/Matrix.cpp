//
// Created by k0itoYuu on 2025/8/14.
//
#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000005];
void solve(){
    int n,m;
    cin>>n>>m;
    if(__gcd(n,m)!=1){
        cout<<-1<<endl;
        return;
    }
    for(int j=1;j-1*2<=m;j+=2){
        v[1].push_back(j);
    }
    for(int j=n/2*2;j>0;j-=2){
        v[1].push_back(j);
    }
    for(auto i=v[1].rbegin();i!=v[1].rend();i++){
        v[2].push_back(*i);
    }
    for(int i=3;i<=n;i++){
        if(i%2==1){
            v[i]
        }else{

        }
    }

}

int main(){
    int t=1;
    while(t--)solve();
}