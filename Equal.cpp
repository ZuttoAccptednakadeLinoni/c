//
// Created by k0itoYuu on 2025/7/22.
//
#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
#define int long long
#define N 5000000
int prime[5000000];
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2==1){
        cout<<"YES\n";
        return;
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        int j=arr[i];
        auto it=v.begin();
        while(arr[i]>1){
            if(arr[i]%(*it)==0){
                m[*it]++;
                arr[i]/=*it;
            }else{
                it++;
            }
        }
    }
    for(auto i:m){
        //cout<<i.first<<" "<<i.second<<endl;
        if(i.second%2!=0){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

signed main(){
    int t;
    init();
    int i;
    for(i=0;i<N;i++){
        if(!prime[i])v.push_back(i);
    }
    cin>>t;
    while(t--)solve();
}