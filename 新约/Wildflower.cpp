//
// Created by k0itoYuu on 2025/7/10.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res%mod;
}
vector<int>v[200005];
int vis[200005];
int dfs(int i){
    queue<int>q;
    q.push(i);
    vis[i]=1;int num=1;
    while(!q.empty()){
        int tp=q.front();
        q.pop();int si=0;
        for(auto ot:v[tp]){
            if(!vis[ot]){
                vis[ot]=1;
                num++;
                si++;
                q.push(ot);
            }
        }
        if(si>=2){
            return -1;
        }
    }
    return num;
}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        v[i].clear();
        vis[i]=0;
    }
    for(int i=1;i<n;i++){
        int q,w;
        cin>>q>>w;
        v[q].push_back(w);
        v[w].push_back(q);

    }
    queue<int>qu;
    qu.push(1);
    //cout<<1<<endl;
    vis[1]=1;int z=0,y=0;
    int f=0;
    while(!qu.empty()){
        int tp=qu.front();
        int num=0;
        qu.pop();
        //cout<<tp<<endl;
        for(auto ot:v[tp]){
            if(!vis[ot]){
                vis[ot]=1;
                num++;
                qu.push(ot);
            }
        }
        if(num>2){
            cout<<0<<endl;
            return;
        }else if(num==2){
            f=1;
            //cout<<qu.front()<<"1"<<endl;
            z=dfs(qu.front());
            qu.pop();
            //cout<<qu.front()<<"2"<<endl;
            y=dfs(qu.front());
            qu.pop();
            //cout<<z<<y<<endl;
            if(z==-1||y==-1){
                cout<<0<<endl;
                return ;
            }
        }
    }
    if(!f){
        cout<<binpow(2,n)<<endl;
        return;
    }
    int r,u;
    if(z==y){
        r=z+y;
        u=2;
    }
    else {
        r=min(z,y)*2+1;
        u=3;
    }
    int ans=(binpow(2,n-r)*u)%mod;
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}