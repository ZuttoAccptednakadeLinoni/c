//
// Created by k0itoYuu on 2025/5/26.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[400005];
void solve(){
    int n;
    cin>>n;
    int ls=0;
    int sum=(1+n)*n/2;
    vector<int>v;
    for (int i=0;i<=n*2;i++)arr[i]=0;
    //cout<<1<<endl;
    for (int i=0;i<n-1;i++){
        int q;
        cin>>q;
        //cout<<q<<endl;
        arr[q-ls]++;
        ls=q;
        //v.push_back(q-ls);
        if (q>sum){
            cout<<"NO\n";
            return;
        }
    }
    //cout<<1<<endl;
    //sort(v.begin(),v.end());
    vector<int>qs;
    //vector<int>mo;
    //cout<<1<<endl;
    for (int i=1;i<=n;i++){
        if (arr[i]==0)qs.push_back(i);
    }
    //cout<<1<<endl;
    if (qs.size()>2)cout<<"NO\n";
    //cout<<1<<endl;
    if (qs.size()==1){

    }
    if (arr[qs[0]+qs[1]])cout<<"YES\n";
    else cout<<"NO\n";
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}
