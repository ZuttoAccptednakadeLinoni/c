//
// Created by k0itoYuu on 2025/5/13.
//
#include<bits/stdc++.h>
using namespace std;
double arr[500005];
double p[500005];
void solve(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    double q;
    for (int i=0;i<n;i++){
        cin>>q;
        p[i]=q/1e5;
    //    cout<<p[i]<<endl;
    }
    double ans=n;
    for (int i=0;i<n;i++){
        if (p[i]==0)continue;

        double now = i + ((1 - p[i]) / p[i]) * (i - arr[i] + 1) + 1;
    //    cout<<now<<endl;
        ans=min(ans,now);
    }
    printf("%0.12f\n",ans);
}

int main(){
    int t;
    cin>>t;
    //cout<<t<<endl;
    while (t--)solve();
}