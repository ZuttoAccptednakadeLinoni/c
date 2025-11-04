//
// Created by k0itoYuu on 2025/8/12.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    x2-=x1,y2-=y1,x3-=x1,y3-=y1,x4-=x1,y4-=y1;
    x1-=x1;
    y1-=y1;
    int ans=0;
    int a=x1+x2,b=y1+y2,c=x3+x4,d=y3+y4;
    cout<<max(abs(c-a),abs(d-b))<<endl;

}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}