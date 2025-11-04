//
// Created by k0itoYuu on 2025/8/19.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[65];
int b[65];
int c[65];
int d[65];
void solve(){
    int n,m,w,k;
    cin>>n>>m>>w>>k;
    for(int i=0;i<61;i++){
        c[i]=0;
        a[i]=0;
        b[i]=0;
    }
    for(int i=0;i<61;i++){
        int j=1ll<<i;
        a[i+1]=(n)/(j*2)*j+max((n)%(j*2)-j,0ll);
        b[i+1]=(m+1)/(j*2)*j+max((m+1)%(j*2)-j,0ll);
        c[i+1]=b[i+1]-a[i+1];
    }

    int y=max((n-k),0ll)>>w,l=max((m-k),0ll)>>w;
    if(((y<<w)+k)<n)y++;
    if(((l<<w)+k)>m)l--;
    for(int i=w;i<61;i++){
        int j=1ll<<(i-w);
        //cout<<(y)/(j*2)*j+max((y)%(j*2)-j,0)<<" "<<(l+1)/(j*2)*j+max((l+1)%(j*2)-j,0)<<" |";
        c[i+1]+=(y)/(j*2)*j+max((y)%(j*2)-j,0ll)-((l+1)/(j*2)*j+max((l+1)%(j*2)-j,0ll));
    }

    for(int i=1;i<=w;i++){
        if(k>>(i-1)&1)c[i]-=(l-y)+1;

    }
//    for(int i=1;i<=30;i++)cout<<c[i]<<" ";

    int ans=0;
    for(int i=1;i<=61;i++){
        if(c[i]%2==1)ans+=(1ll<<(i-1));
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
//    int n,m,w,k;
//    cin>>n>>m>>w>>k;
//    for(int i=n;i<=m;i++){
//        for(int j=0;j<30;j++){
//            b[j]+=((i>>j)&1);
//        }
//        if(i%(1<<(w))!=k){
//            cout<<i<<" ";
//            for(int j=0;j<30;j++){
//                a[j]+=((i>>j)&1);
//            }
//        }
//    }
//    cout<<endl;
//    for(int i=0;i<30;i++)cout<<a[i]<<" ";
//    cout<<endl;
//    for(int i=0;i<30;i++)cout<<b[i]<<" ";
//    cout<<endl;

    while(t--)solve();
}