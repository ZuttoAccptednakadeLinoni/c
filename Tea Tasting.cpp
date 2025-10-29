//
// Created by k0itoYuu on 2025/5/26.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

int cf[200005];
int qz[200005];
int sy[200005];
int arr[200005];
int brr[200005];

void solve(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        sy[i]=0;
        cf[i]=0;
        qz[i]=0;
    }
    for (int i=1;i<=n;i++){
        cin>>brr[i];
        qz[i]=qz[i-1]+brr[i];
    }
    for (int i=1;i<=n;i++){
        int l=i,r=n;
        int ls=i-1;
        while (l<=r){
            int m=(l+r)/2;
            if (qz[m]-qz[i-1]<=arr[i]){
                l=m+1;
                ls=m;
            }else{
                r=m-1;
            }
        }

        if (ls!=i-1){
            cf[i]++;
            cf[ls+1]--;
            sy[ls+1]+=arr[i]-(qz[ls]-qz[i-1]);
            //cout<<"sy"<<arr[i]<<" "<<(qz[ls]-qz[i-1])<<endl;
        }else{
            sy[ls+1]+=arr[i]-(qz[ls]-qz[i-1]);
            //cout<<"sy"<<arr[i]<<" "<<(qz[ls]-qz[i-1])<<endl;
        }
    }
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=cf[i];
        cout<<sum*brr[i]+sy[i]<<" ";
    }
    cout<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}