//
// Created by k0itoYuu on 2025/8/13.
//
#include<bits/stdc++.h>
using namespace std;
char ans[1005];
void solve(){
    int n;
    cin>>n;
    cout<<"? "<<n<<" ";
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    int q;
    cin>>q;
    int bi=1;
    if(q==0)bi=0;
    int y,z;
    if(bi){
        int l=1,r=n;
        while(l<=r){
            int m=(l+r)/2;
            cout<<"? "<<m<<" ";
            for(int i=1;i<=m;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            cin>>q;
            if(q>=1){
                r=m-1;
                y=m;
            }else l=m+1;
        }
        z=y-1;
    }else{
        int l=1,r=n;
        while(l<=r){
            int m=(l+r)/2;
            cout<<"? "<<n-m+1<<" ";
            for(int i=n;i>=m;i--){
                cout<<i<<" ";
            }
            cout<<endl;
            cin>>q;
            if(q>=1){
                l=m+1;
                y=m;
            }else r=m-1;
        }
        z=y+1;
    }
    for(int i=1;i<=n;i+=2){
        cout<<"? 7 "<<z<<" "<<z<<" "<<y<<" "<<i<<" "<<min(i+1,n)<<" "<<i<<" "<<min(i+1,n)<<" "<<endl;
        cin>>q;
        if(q==6){
            ans[i]='(';
            ans[min(i+1,n)]=')';
        }else if(q==1){
            ans[i]='(';
            ans[min(i+1,n)]='(';
        }else if(q==2){
            ans[i]=')';
            ans[min(i+1,n)]=')';
        }else if(q==4){
            ans[i]=')';
            ans[min(i+1,n)]='(';
        }
    }
    cout<<"! ";
    for(int i=1;i<=n;i++)cout<<ans[i];
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}