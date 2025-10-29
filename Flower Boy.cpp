//
// Created by k0itoYuu on 2025/5/19.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int brr[200005];
int pre[200005];
int erp[200005];
void solve(){
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<m;i++){
        cin>>brr[i];
        pre[i]=INT_MAX;
        erp[i]=-1;
    }
    int j=0;
    for (int i=0;i<n;i++){
        if (arr[i]>=brr[j]){
            pre[j]=i;
            j++;
            if (j==m)break;
        }
    }
    j=m-1;
    for (int i=n-1;i>=0;i--){
        if (arr[i]>=brr[j]){
            erp[j]=i;
            j--;
            if (j<=0)break;
        }
    }
    // for (int i=0;i<m;i++){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;
    // for (int i=0;i<m;i++)cout<<erp[i]<<" ";
    // cout<<endl;
    if (pre[m-1]!=INT_MAX||erp[0]!=-1){
        cout<<0<<endl;
        return;
    }
    if (m==1){
        cout<<brr[0]<<endl;
        return;
    }
    int ans=INT_MAX;
    if (erp[1]!=-1)ans=brr[0];
    if (pre[m-2]!=INT_MAX)ans=min(ans,brr[m-1]);
    for (int i=1;i<m-1;i++){
        //cout<<i<<" "<<erp[i+1]<<" "<<pre[i-1]<<endl;
        if (erp[i+1]>pre[i-1])ans=min(ans,brr[i]);
    }
    if (ans==INT_MAX)cout<<-1<<endl;
    else cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}