//
// Created by k0itoYuu on 2025/8/1.
//
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int arr[100005];
int gq[100005];
int gh[100005];
int nxt[100005];
int f[100005][22];
void solve(){
    int n;
    cin>>n;
    int ff=1;
    cin>>arr[1];
    int ans=0;
    for(int i=2;i<=n;i++){
        cin>>arr[i];
        if(arr[i]!=arr[i-1])ff=0;
    }
    if(ff){
        cout<<0<<endl;
        return;
    }

    for(int i=1;i<=n;i++){
        gq[i]=__gcd(gq[i-1],arr[i]);//cout<<gq[i]<<" ";
    }
    gh[n+1]=0;
    for(int i=n;i>=1;i--){
        gh[i]=__gcd(gh[i+1],arr[i]);
        //cout<<gh[i]<<" ";
    }
    int gq2=0;
    for(int i=1;i<=n-2;i++){
        gq2=__gcd(gq2,abs(arr[i]-arr[i+1]));
        ans=max(ans,__gcd(gq2,gh[i+1]));
    }
    //cout<<ans<<endl;
    //cout<<endl;
    gq2=0;
    for(int i=n;i>=2;i--){
        gq2=__gcd(gq2,abs(arr[i]-arr[i-1]));
        ans=max(ans,__gcd(gq2,gq[i-1]));
    }
    //cout<<ans<<endl;
    ans=max(ans,gq[n]);
    //cout<<endl;
    nxt[n]=n;
    for(int i=n;i>=2;i--){
        if(gq[i-1]>gq[i])nxt[i-1]=i-1;
        else nxt[i-1]=nxt[i];

    }
    //cout<<endl;
    for(int i=1;i<=n;i++) f[i][0]=abs(arr[i]-arr[i+1]);
    for(int j=1;j<=20;j++) //枚举区间长度
        for(int i=1;i+(1<<j)-1<=n;i++) //枚举起点
            f[i][j]=gcd(f[i][j-1],f[i+(1<<(j-1))][j-1]);
    nxt[0]=0;
    for(int j=1;j<=n+1;j++){
//        cout<<"J"<<j<<endl;
        for(int i=0;i<j;i++){
            i=nxt[i];int l=i+1;
//            cout<<"l"<<l<<endl;

            if(i>j)continue;
            int g=0;
            if(j-l-1>0) {
                int q = log2(j-1 - l);
//                cout << q << endl;
//                cout<<f[l][q]<<" "<<j-1 - (1 << q) <<endl;
                g = gcd(f[l][q], f[j-1 - (1 << q) ][q]);
//                cout << "g" << g << endl;
            }
//            for(int l=i+1;l<j-1;l++){
//                //cout<<abs(arr[l]-arr[l+1])<<" ";
//                g=__gcd(g,abs(arr[l]-arr[l+1]));
//            }
            //cout<<endl;
//            cout<<"G"<<g<<" "<<gq[i]<<" "<<gh[j]<<endl;
            ans=max(ans,__gcd(gh[j],__gcd(g,gq[i])));
//            cout<<"ans"<<ans<<endl;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(true);
    int t;
    cin>>t;
    while(t--)solve();
}
/*
1
5
6 1 4 7 9
1

5

3 6 9 12 1
 */