//
// Created by k0itoYuu on 2025/9/17.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    double pp,a,b,c,d,e,f;
    cin>>pp>>a>>b>>c>>d>>e>>f;
    int q=300*(a+b+c+d+e+f);
    int w=320*(a+b+c+d+e+f);
    double ans1=(300*a+300*b+200*c+100*d+50*e+0*f)/q*100;
    double p=max(0.0,(320*a+300*b+200*c+100*d+50*e+0*f)/w-0.8)*5*pp;
    //cout<<(int)(300*a+300*b+200*c+100*d+50*e+0*f)<<endl;
    printf("%0.2f",ans1);
    cout<<"% ";
    int ans2;
    //cout<<p<<endl;
    //cout<<((p-(int)p)>=0.5000)<<endl;
    if((p-(int)p)>0.4999999)ans2=(int)p+1;
    else ans2=(int)p;
    cout<<ans2<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
2
630
3029 2336 377 41 10 61
3000
20000 10000 0 0 0 0
 */