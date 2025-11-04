//
// Created by k0itoYuu on 2025/8/20.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
int brr[200005];
void solve(){
    int n,k;
    cin>>n>>k;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        char q;
        cin>>q;
        if(q=='A')arr[i]=1,a++;
        else arr[i]=-1,b++;
        brr[i]=brr[i-1]+arr[i];
    }
    if(a==0||b==0){
        cout<<"Yes\n";
        cout<<max(k,2ll)<<endl;
        return;
    }
    int f=0;
    for(int i=0;i<n;i++){
        if(abs(brr[i])>=2){
            f=1;
            break;
        }
    }
    if(brr[n-1]!=0)f=1;
    int ans=0;
    int sa=0,sb=0;
    if(f){
        cout<<"Yes\n";

        int w=min(k/a,k/b);
        w=max(0ll,w-1);
        sa=w*a,sb=w*b;
        ans+=n*w;

//        cout<<sa<<" "<<sb<<endl;
//        cout<<"ans"<<ans<<endl;
        for(int i=0;i<n;i++){
            if(abs(sa-sb)>=2&&max(sa,sb)>=k){
                cout<<ans<<endl;
                return;
            }
            if(arr[i]>0)sa++;
            else sb++;
            ans++;

        }
        for(int i=0;i<n;i++){
            if(abs(sa-sb)>=2&&max(sa,sb)>=k){
                cout<<ans<<endl;
                return;
            }
            if(arr[i]>0)sa++;
            else sb++;
            ans++;

        }
        for(int i=0;i<n;i++){
            if(abs(sa-sb)>=2&&max(sa,sb)>=k){
                cout<<ans<<endl;
                return;
            }
            if(arr[i]>0)sa++;
            else sb++;
            ans++;

        }
    }
    else cout<<"No\n";
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
3
1 11
A
2 11
AB
3 11
ABB
 */