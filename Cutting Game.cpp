//
// Created by k0itoYuu on 2025/6/18.
//
#include<bits/stdc++.h>
using namespace std;
struct nd{
    int x,y;
};
nd x[200005];
nd y[200005];
bool cmpp(nd a,nd b){
    return a.x<b.x;
}
bool ccmp(nd a,nd b){
    return a.y<b.y;
}
void solve(){
    int a,b,n,m;
    cin>>a>>b>>n>>m;
    for (int i=0;i<n;i++){
        int xx,yy;
        cin>>xx>>yy;
        x[i]={xx,yy};
        y[i]={xx,yy};
    }
    sort(x,x+n,cmpp);
    sort(y,y+n,ccmp);
    int ans[2];
    ans[0]=0;
    ans[1]=0;
    int ss=1,xx=a,zz=1,yy=b;
    int nows=0,nowx=n-1,nowz=0,nowy=n-1;
    for (int i=0;i<m;i++){
        char c;int k;int sum=0;
        cin>>c;cin>>k;
        //cout<<c<<k<<endl;
        if (c=='U'){
                while (x[nows].x<ss+k&&nows<n){
                    //cout<<x[nows].x<<" "<<x[nows].y<<endl;
                    if (x[nows].y>=zz&&x[nows].y<=yy)sum++;
                    nows++;
                }
            ss+=k;
        }else if (c=='D'){
                while (x[nowx].x>xx-k&&nowx>=0){
                    //cout<<x[nowx].x<<" "<<x[nowx].y<<endl;
                    if (x[nowx].y>=zz&&x[nowx].y<=yy)sum++;
                    nowx--;
                }
            xx-=k;
        }else if (c=='L'){
                while (y[nowz].y<zz+k&&nowz<n){
                    //cout<<y[nowz].x<<" "<<y[nowz].y<<endl;
                    if (y[nowz].x>=ss&&y[nowz].x<=xx)sum++;
                    nowz++;
                }
            zz+=k;
        }else if (c=='R'){
            //cout<<1<<endl;
                while (y[nowy].y>yy-k&&nowy>=0){
                    //cout<<y[nowy].x<<" "<<y[nowy].y<<endl;
                    if (y[nowy].x>=ss&&y[nowy].x<=xx)sum++;
                    nowy--;
                }
            yy-=k;
        }
        //cout<<sum<<endl;
        ans[i%2]+=sum;
        //cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}