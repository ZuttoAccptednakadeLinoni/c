//
// Created by k0itoYuu on 2025/10/20.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 200005
int prime[200005];
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
int arr[200005];

void solve(){
    int n;
    cin>>n;
    map<int,int>mp;
    int mx=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        mx=max(mx,arr[i]);
    }

    for(int i=1;i<=n;i++){
        int q;
        cin>>q;
    }
    int ans=2;
    //cout<<mx<<endl;
    for(int j=0;j<v.size();j++){
        int q=0,w=0;
//        for(int i=1;i<=n;i++){
//            if(arr[i]%v[j]==0)q++;
//            if(arr[i]%v[j]==v[j]-1)w++;
//        }
        int e=1;
        if(j>mx)break;
        while(v[j]*e<=mx+5){
            q+=mp[v[j]*e];
            w+=mp[v[j]*e-1];
            e++;
        }
        //cout<<q<<" "<<w<<endl;
        if(q>=2){
            ans=min(ans,0ll);
        }else if(q==1&&w>0)ans=min(ans,1ll);
        else ans=min(ans,2ll);
    }
    cout<<ans<<endl;
}
signed main(){
    int i;

    init();
    for(i=0;i<N;i++){
        if(!prime[i])v.push_back(i);
    }
    int t;
    cin>>t;
//    cout<<v.size();
//    for(int i=1;i<=50;i++){
//        cout<<i<<" ";
//    }
    while(t--)solve();
}
