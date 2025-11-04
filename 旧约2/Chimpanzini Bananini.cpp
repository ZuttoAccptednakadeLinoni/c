//
// Created by k0itoYuu on 2025/5/20.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int sum=0;
    int n;
    cin>>n;
    int ans=0;int num=0;
    int k=0;bool f=0;
    deque<int>d;
    for (int i=1;i<=n;i++){
        int q;
        cin>>q;
        if (q==3){

            cin>>k;
            num++;
            if (f==0)d.push_back(k);
            else d.push_front(k);
            sum+=k;
            ans+=k*num;
            cout<<ans<<endl;
        }else if (q==2){
            ans=sum*(num+1)-ans;
            f=!f;
            cout<<ans<<endl;
        }else if (q==1){

            ans+=sum;
            if (!f){
                k=d.back();
                d.pop_back();
                d.push_front(k);

            }else{
                k=d.front();
                d.pop_front();
                d.push_back(k);
            }
            ans-=k*num;

            cout<<ans<<endl;
        }


    }
}
//
signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}