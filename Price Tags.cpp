//
// Created by k0itoYuu on 2025/9/16.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];vector<int>v(400005);
vector<int>qz(400005);
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>v(400005);
    vector<int>qz(400005);
    map<int,int>mp;
    int mx=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        v[arr[i]]++;
        mx=max(mx,arr[i]);
    }
    for(int i=1;i<=mx*2;i++){
        qz[i]=qz[i-1]+v[i];
    }
    //cout<<qz[150];
    int ans=LLONG_MIN;
    //cout<<ans<<endl;
    for(int i=2;i<=mx+5;i++){
        int k=1;
        int sum=0;
        int bz=0;
        //cout<<i<<"!!!\n";
        while(i*k<=mx+i){
            if(qz[i*(k)]-qz[max(i*(k-1),0ll)]>0){
                //cout<<i*k-1<<"||";
                int q=qz[i*(k)]-qz[max(i*(k-1),0ll)];
                //cout<<q<<" "<<v[k]<<endl;
                sum=sum+q*(k);
                bz+=max(q-v[k],0ll)*m;
            }
            k++;
        }
        //cout<<sum<<" "<<bz<<" ";
        ans=max(ans,sum-bz);
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    cin>>t;
    while(t--)solve();
}
//17 50 17 50 50