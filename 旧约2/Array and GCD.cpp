//
// Created by k0itoYuu on 2025/5/21.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> pri;
const int N=10000005;
bool not_prime[N];
int qz[400005];
void pre(int n) {
    for (int i = 2; i <= n; ++i) {
        if (!not_prime[i]) {
            pri.push_back(i);
        }
        for (int pri_j : pri) {
            if (i * pri_j > n) break;
            not_prime[i * pri_j] = true;
            if (i % pri_j == 0) {
                break;
            }
        }
    }
}
int arr[400005];
int sum[400005];
void solve(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        sum[i]=0;
        cin>>arr[i];

    }
    sort(arr+1,arr+n+1);
    for (int i=1;i<=n;i++){
        sum[i]=arr[i]+sum[i-1];
    }
    int l=0,r=n;
    int ans=n-1;
    while (l<=r){
        int m=(l+r)/2;
        //cout<<m<<endl;
        //cout<<sum[n]-sum[m]<<qz[n-m-1]<<endl;
        if (sum[n]-sum[m]>=qz[n-m-1]){
            r=m-1;
            ans=m;
        }else l=m+1;
    }
    cout<<ans<<endl;
}

signed main(){
    pre(10000005);
    //cout<<pri.size();
    qz[0]=pri[0];
    //cout<<pri[0]<<endl;
    for (int i=1;i<400005;i++){
        qz[i]=pri[i]+qz[i-1];
    }
    int t;
    cin>>t;
    while (t--)solve();
}