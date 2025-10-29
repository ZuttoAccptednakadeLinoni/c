//
// Created by k0itoYuu on 2025/7/2.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 100005
int prime[N];
int ans[N];
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
    cout<<1<<" ";
    for(int i=2;i<=n;i++)ans[i]=0;
    for(auto i = v.rbegin(); i != v.rend(); ++i){
        if(*i>n)continue;
        int j=2;
        int q=*i;
        while(j**i<=n){
            if(!ans[*i*j]){
                ans[*i*j]=q;
                q=*i*j;
            }
            j++;
        }
        ans[*i]=q;

    }
    for(int i=2;i<=n;i++){
        cout<<ans[i]<<" ";
    }
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
