//
// Created by k0itoYuu on 2025/7/11.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[5005];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int b=arr[n-1];
    int ans=0;
//    for(int i=n-2;i>=1;i--){
//        for(int j=i-1;j>=0;j--){
//            if(arr[i]+arr[j]>b)ans++;
//        }
//    }
//    cout<<ans<<endl;

    for(int i=n-1;i>=2;i--){
        for(int j=i-1;j>=1;j--){
            int w=j;
            int l=0,r=j-1,m;
            while(l<=r){
                m=(l+r)/2;
                //cout<<arr[m]<<" "<<arr[i]<<" "<<arr[j]<<" "<<b<<" "<<(((arr[m]+arr[i]+arr[j])>b)&&((arr[m]+arr[j])>arr[i]))<<endl;
                if((((arr[m]+arr[i]+arr[j])>b)&&((arr[m]+arr[j])>arr[i]))){
                    w=m;
                    r=m-1;
                }else{
                    l=m+1;
                }
            }
            ans+=max((j-w),0ll);
            //cout<<"!!!"<<i<<" "<<j<<" "<<w<<" "<<ans<<endl;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;;
    while(t--)solve();
}