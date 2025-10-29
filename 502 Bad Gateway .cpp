//
// Created by k0itoYuu on 2025/7/5.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double q=sqrt(2*n);
        int a,b;
        a=q;b=a+1;
        double w,e;
        2*n/a+a<2*n/b+b;
        if(2*n*b+a*a*b<2*n*a+b*b*a){
            int s=__gcd((2*n+a*a)-a,2*a);
            //cout<<s<<endl;
            cout<<((2*n+a*a)-a)/s<<" "<<(2*a)/s<<endl;
        }else{
            int s=__gcd((2*n+b*b)-b,2*b);
            //cout<<s<<endl;
            cout<<((2*n+b*b)-b)/s<<" "<<(2*b)/s<<endl;
        }

    }
}