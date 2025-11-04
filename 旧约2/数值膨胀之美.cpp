//
// Created by k0itoYuu on 2025/5/14.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

int arr[100005];
int p[100005];
bool cmp(int a,int b){
    return arr[a]<arr[b];
}
signed main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        p[i]=i;
    }
    arr[n+1]=LONG_MAX;
    p[n+1]=n+1;
    sort(p+1,p+n+1,cmp);
    int mm=arr[p[1]],mx=arr[p[n]];
    int ans;
    int l=p[1],r=p[1];
    arr[p[1]]*=2;
    if (arr[p[1]]>mx)mx=arr[p[1]];
    mm=min(arr[p[1]],arr[p[2]]);
    ans=mx-mm;
    //cout<<ans<<" "<<mx<<" "<<mm<<endl;
    for (int i=2;i<=n;i++){
        mm=min(arr[p[1]],arr[p[i]]);
        //cout<<mm<<endl;
        if (p[i]>=l&&p[i]<=r)continue;
        else if (p[i]<l){
            for (int j=l-1;j>=p[i];j--){
                if (j==p[i])mm=min(min(arr[p[1]],arr[p[i]]*2),arr[p[i+1]]);
                l--;
                arr[j]*=2;
                if (arr[j]>mx)mx=arr[j];
                ans=min(ans,mx-mm);
                //cout<<mx<<" "<<mm<<" "<<l<<" "<<r<<endl;
            }
        }else if (p[i]>l){
            for (int j=r+1;j<=p[i];j++){
                if (j==p[i])mm=min(min(arr[p[1]],arr[p[i]]*2),arr[p[i+1]]);
                r++;
                arr[j]*=2;
                if (arr[j]>mx)mx=arr[j];
                ans=min(ans,mx-mm);
                //cout<<mx<<" "<<mm<<" "<<l<<" "<<r<<endl;
            }

        }
    }
    cout<<ans<<endl;
}
/*
8
4 2 3 6 7 8 4 9
 */