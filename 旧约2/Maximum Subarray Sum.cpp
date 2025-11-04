//
// Created by k0itoYuu on 2025/5/17.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
vector<int>v;
int qz[200005],hz[200005];
int ii=1e12;
int n;
int qmaxSum4(vector<int>&p)
{
    vector<ll>f(n+1);f[0]=p[0];
    ll res=f[0];

    for(ll i=1;i<n;i++){
        f[i]=max(f[i-1]+p[i],p[i]);
        res=max(res,f[i]);
    }
    return res;
}
int hmaxSum4(vector<int>&vec)
{
    int maxsum = vec[vec.size()-1], sum = 0;
    hz[vec.size()-1]=vec[vec.size()-1];
    for(int i =(int)vec.size()- 2; i >=0 ; i--)
    {
        hz[i]=max(hz[i+1]+vec[i],vec[i]);

        maxsum=max(hz[i],hz[i+1]);
    }
    //return maxsum;
    return max(0ll,maxsum);
}
ll zdqz(vector<ll>p,ll pos){
    ll maxh=LLONG_MIN,h=0;
    for(ll i=pos-1;i>=0;i--){
        h+=p[i];
        maxh=max(maxh,h);
    }
    return max(0ll,maxh);
}
ll zdhz(vector<ll>p,ll pos){
    ll maxg=LLONG_MIN,g=0;
    for(ll i=pos+1;i<n;i++){
        g+=p[i];
        maxg=max(maxg,g);
    }
    return max(0ll,maxg);
}
void solve(){
    int k,q;

    cin>>n>>k;
    string s;
    cin>>s;
    v.clear();
    for (int i=0;i<=n;i++){
        qz[i]=0;
        hz[i]=0;
    }
    for (int i=0;i<n;i++){
        cin>>q;
        v.push_back(q);
    }
    int f=-1;
    for (int i=0;i<n;i++){
        if (s[i]=='0'){
            v[i]=-ii;
            f=i;
        }
    }
    //for (int i = 0; i < n; i++)cout << v[i] << " ";
    //cout<<endl;

    int w=qmaxSum4(v);
    //int ww=hmaxSum4(v);
    /*for (int i = 0; i < n; i++)cout << qz[i] << " ";
    cout<<endl;
    for (int i = 0; i < n; i++)cout << hz[i] << " ";
    cout<<endl;*/
    //cout<<w<<endl;
    // if ((f==-1)){
    //     if (w!=k)cout<<"NO\n";
    //     else{
    //         cout<<"YES\n";
    //         for (int i = 0; i < n; i++)cout << v[i] << " ";
    //         cout<<endl;
    //     }
    //     return;
    // }
    //cout<<count(s.begin(),s.end(),'0')<<endl;
    //cout<<w<<endl;
    if(w>k||(count(s.begin(),s.end(),'0')==0&&w!=k)){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
        if (f!=-1)v[f]=k-zdqz(v,f)-zdhz(v,f);
        //cout<<zdqz(v,f)<<" "<<zdhz(v,f)<<endl;
        for (int i = 0; i < n; i++)cout << v[i] << " ";
        cout<<endl;
    }
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}