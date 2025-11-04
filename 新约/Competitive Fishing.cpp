//
// Created by k0itoYuu on 2025/7/14.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int brr[200005];
bool cmp(int a,int b){
    return arr[a]>arr[b];
}
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=1;
    arr[n-1]=0;
    brr[n-1]=n-1;
    for(int i=n-2;i>=0;i--){
        if(s[i+1]=='0')arr[i]=arr[i+1]-1;
        else arr[i]=arr[i+1]+1;
        brr[i]=i;
    }
    sort(brr,brr+n,cmp);
    int sum=0;
//    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
//    cout<<endl;
    for(int i=0;i<n;i++){
        //cout<<arr[i]<<" ";
        int now=arr[brr[i]];
        if(now>0){
            //cout<<i<<endl;
            sum+=now;
            //cout<<sum<<endl;
            ans++;
            if(sum>=k)break;
        }
    }
    //cout<<sum<<endl;
    if(sum<k)cout<<-1<<endl;
    else cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}