//
// Created by k0itoYuu on 2025/5/12.
//
#include<bits/stdc++.h>
using namespace std;

struct yy{
    double x,y,r;
};
void solve(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;

    yy cy={(a+c)/2.0,(b+d)/2.0,abs(c-a)*abs(c-a)+abs(d-b)*abs(d-b)/2.0};
    cin>>a>>b>>c>>d;
    yy cr={(a+c)/2.0,(b+d)/2.0,sqrt(abs(c-a)*abs(c-a)+abs(d-b)*abs(d-b))/2.000000};
    //cout<<cy.x<<" "<<cy.y<<" "<<cy.r<<endl;
    //cout<<cr.x<<" "<<cr.y<<" "<<cr.r<<endl;
    //cout<<sqrt((double)2)<<endl;
    //cout<<abs(cy.x-cr.x)<<" "<<abs(cy.y-cr.y)<<" "<<sqrt(2)*cr.r<<endl;;
    double ans=abs(cy.x-cr.x)+abs(cy.y-cr.y)-sqrt(2)*cr.r;
    printf("%.10lf\n", ans);
}
int main(){
    int t;
    cin>>t;
    while (t--)solve();
}