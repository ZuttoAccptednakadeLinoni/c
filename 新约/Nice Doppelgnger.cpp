//
// Created by k0itoYuu on 2025/8/5.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 1000000
int prime[1000000];
int a[N];
vector<int>v;
void init(){
    int i,j,len=0;
    prime[0]=1;
    prime[1]=1;
    for(i = 2;i < N ;i++){
        prime[i] = 0;
    }
    for(i = 2; i < N; i++)
    {
        if(!prime[i]){
            a[len++] = i;
        }
        for(j = 0; j< len &&a [j]*i < N; j++)
        {
            prime[a[j]*i] = 1;
            if(i % a[j] == 0) break;
        }
    }
}

void solve(){
    int n;
    cin>>n;
    set<int>ans;
    for(auto i:v){
        if(i<=n)ans.insert(i);
    }
    //for(auto i :ans)cout<<i<<" ";
    //cout<<endl;
    auto  ii=v.begin();
    while(ans.size()<n/2){
        int  i=*ii;
        for(auto q :v){
            if(q<=i)continue;
            if(q*i>n)break;
            if(q*i<=n)ans.insert(q*i);
        }
        ans.erase(i);
        ii++;
    }
    int num=0;
    for(auto i:ans){

        cout<<i<<" ";
        num++;
        if(num==n/2)break;
    }
    cout<<endl;
}

signed main(){
    int i;

    init();
    for(i=0;i<N;i++){
        if(!prime[i])v.push_back(i);
    }
    int t;
    cin>>t;
    while(t--)solve();
}
