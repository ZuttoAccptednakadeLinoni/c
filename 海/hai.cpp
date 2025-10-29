//
// Created by k0itoYuu on 2025/8/22.
//
#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
int arr[505][505];
int xx[4]={0,1,0,-1};
int yy[4]={1,0,-1,0};
int vis[505][505];int n,m;
set<pp>s;
int ans=0;
void bfsy(int i,int j){
    vis[i][j]=1;
    for (int q=0;q<4;q++){
        int x=i+xx[q],y=j+yy[q];
        if (i+xx[q]>0&&i+xx[q]<=n&&j+yy[q]>0&&j+yy[q]<=m){
            if (arr[x][y]&&!vis[x][y]){
                bfsy(x,y);
            }
        }
    }
}
void bfs(int i,int j){
    vis[i][j]=1;
    for (int q=0;q<4;q++){
        int x=i+xx[q],y=j+yy[q];
        if (i+xx[q]>0&&i+xx[q]<=n&&j+yy[q]>0&&j+yy[q]<=m){
            if (!arr[x][y]&&!vis[x][y])bfs(x,y);
            if (arr[x][y]&&!vis[x][y]){
                ans++;
                //cout<<x<<" "<<y<<endl;
                bfsy(x,y);
            }
        }
    }
}
void solve(){

    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    queue<pp>q;
    for(int i=1;i<=n;i++){
        if(arr[i][1]==0){
            q.push({i,1});
        }
        if(arr[i][m]==0){
            q.push({i,m});

        }
    }

    for(int i=1;i<=m;i++){
        if(arr[1][i]==0){
            q.push({1,i});

        }
        if(arr[n][i]==0){
            q.push({n,i});

        }
    }
    //cout<<q.size()<<endl;
    while(!q.empty()){
        auto i=q.front();
        q.pop();
        bfs(i.first,i.second);
    }
    cout<<ans<<endl;
}

int main(){
    int t=1;
    while(t--)solve();
}