//
// Created by k0itoYuu on 2025/5/12.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    double ans=0;
    vector<double>v;
    for (int i=0;i<n;i++){
        double a,b,c;
        cin>>a>>b>>c;
        double q=(a+b)*c+a*(1.000000000-c);
        //cout<<q<<endl;
        v.push_back(q);
    }
    sort(v.begin(),v.end());
    double t=0;
    for (int i=0;i<n;i++){
//        cout<<v[i]<<" ";
        t+=v[i];
        ans+=t;
//        cout<<ans<<endl;
    }
    printf("%0.9f\n",ans);
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}