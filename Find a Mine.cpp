//
// Created by k0itoYuu on 2025/10/22.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>m>>n;
    cout<<"? "<<1<<" "<<1<<endl;
    int q;
    cin>>q;
    cout<<"? "<<m<<" "<<1<<endl;
    int w;
    cin>>w;
    int t=(q+w+1-m)/2+1;
    int r=q-t+2;
    cout<<"? "<<min(m,max(r,1))<<" "<<min(n,max(t,1))<<endl;
    cin>>w;
    if(w==0){
        cout<<"! "<<min(m,max(r,1))<<" "<<min(n,max(t,1))<<endl;
    }
    else{
        cout<<"? "<<1<<" "<<n<<endl;
        cin>>w;
        //cout<<1<<" "<<w<<endl;
        t=(q+w-n+1)/2+1;
        r=q-t+2;
        cout<<"! "<<t<<" "<<r<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}