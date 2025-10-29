//
// Created by k0itoYuu on 2025/7/26.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;




void solve(){
    int x,n;
    cin>>x>>n;
    int q=x-n,h=x+(n-2);
    set<int>s;
    //cout<<q<<" "<<h<<endl;
    for(int j=1;j<=sqrt(q);j++){
        int i=j;
        //cout<<i<<" "<<(q/i+2)/2<<endl;
        if(q%i==0&&(q/i+2)%2==0&&(q/i+2)/2<=x&&(q/i+2)/2>=n){
            s.insert((q/i+2)/2);
        }
        i=q/j;//cout<<i<<" "<<(q/i+2)/2<<endl;
        if(q%i==0&&(q/i+2)%2==0&&(q/i+2)/2<=x&&(q/i+2)/2>=n){
            s.insert((q/i+2)/2);
        }
    }
    q=h;
    for(int j=1;j<=sqrt(q);j++){
        int i=j;
        //cout<<i<<" "<<(q/i+2)/2<<endl;
        if(q%i==0&&(q/i+2)%2==0&&(q/i+2)/2<=x&&(q/i+2)/2>=n){
            s.insert((q/i+2)/2);
        }
        i=q/j;//cout<<i<<" "<<(q/i+2)/2<<endl;
        if(q%i==0&&(q/i+2)%2==0&&(q/i+2)/2<=x&&(q/i+2)/2>=n){
            s.insert((q/i+2)/2);
        }
    }
    //for(auto i:s)cout<<i<<" ";
    //cout<<endl;
    cout<<s.size()<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}