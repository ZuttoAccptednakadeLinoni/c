//
// Created by k0itoYuu on 2025/6/17.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[100005];
int brr[100005];
int crr[100005];
bool cmp(int a,int b){

    return arr[a]>arr[b];
}
void solve(){
    int n;
    cin>>n;
    int ans=0;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        ans+=arr[i];
        brr[i]=0;
        crr[i]=0;
    }
    for (int i=0;i<n-1;i++){
        int q,w;
        cin>>q>>w;
        brr[q]++;
        brr[w]++;
    }
    //cout<<ans<<endl;
    for (int i=1;i<=n;i++){
        brr[i]--;
        crr[i]=i;

    }
    sort(crr+1,crr+n+1,cmp);
    int now=1;
    //for (int i=1;i<=n;i++)cout<<crr[i]<<" ";
    //cout<<endl;
    cout<<ans<<" ";
    for (int i=0;i<n-2;i++){
        //cout<<arr[crr[now]]<<" ";
        while (brr[crr[now]]<=0)now++;
        ans+=arr[crr[now]];
        brr[crr[now]]--;

        cout<<ans<<" ";
    }
    cout<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}
