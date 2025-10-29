//
// Created by k0itoYuu on 2025/6/28.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

int x[1005],y[1005],r[1005];
int c[1005];
bool vis[1005];
vector<int>v[1005];
int pd(int i,int j){
    if((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])==(r[i]+r[j])*(r[i]+r[j]))return 1;
    else return 0;
}
int ans=1;
int hh,bb;
void coler(int i){
    queue<int>q;
    ans=1;
    hh=1,bb=0;
    c[i]=1;
    q.push(i);
    while(!q.empty()){
        auto f=q.front();
        q.pop();
        vis[f]=1;
        //cout<<f<<"!!"<<vis[f]<<endl;
        for(auto a:v[f]){
            if(c[a]==0){
                if(c[f]==1){
                    c[a]=2;
                    bb++;
                }
                else {
                    c[a]=1;
                    hh++;
                }
                q.push(a);
                vis[a]=1;
            }else{
                if(c[a]==c[f])ans=0;
            }
        }
    }
    //cout<<hh<<"hhbb"<<bb<<endl;

}

signed main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>r[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(i==j)continue;
            if(pd(i,j)){
                v[i].push_back(j);
                v[j].push_back(i);
            }
        }
    }
    for(int i=0;i<n;i++){

        if(!vis[i]){
//           cout<<endl<<coler(i)<<endl;
            coler(i);
            if(ans&&hh!=bb){
                cout<<"YES\n";
                return 0;
            }
        }
    }

    cout<<"NO\n";
}