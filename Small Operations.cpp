//
// Created by k0itoYuu on 2025/5/27.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 10000000
int prime[10000000];
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
    int x,y,k;
    cin>>x>>y>>k;
    int q=gcd(x,y);
    x/=q;
    y/=q;
    //cout<<x<<" "<<y<<endl;
    int ans=0;
    for (int i=k;i>1;i--){
        i=min(x,i);
        if (x==1)break;
        //cout<<x<<i<<endl;
        while (x%i==0){
            x=x/i;
            ans++;
        }
        //cout<<i<<endl;
    }
    //cout<<x<<endl;
    if (x!=1){
        cout<<-1;
        return;
    }
    //cout<<"!"<<endl;
    for (int i=k;i>1;i--){
        i=min(y,i);
        if (y==1)break;
        while (y%i==0){
            y=y/i;
            ans++;
            cout<<y<<endl;
        }
        //cout<<i<<endl;
    }
    //cout<<y<<endl;
    if (y!=1){
        cout<<-1;
        return;
    }
    cout<<ans<<endl;
}

signed main(){
    int i;

/*    init();
    for(i=0;i<N;i++){
        if(!prime[i])v.push_back(i);
    }*/
    int t;
    cin>>t;
    while(t--)solve();
}
