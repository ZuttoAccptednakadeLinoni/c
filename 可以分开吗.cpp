//
// Created by k0itoYuu on 2025/5/15.
//
#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[505][505];
#define pp pair<int,int>
set<pp>s;
int vis[505][505];
int xx[4]={0,1,0,-1};
int yy[4]={1,0,-1,0};
void bfs(int i,int j){
    vis[i][j]=1;
    for (int q=0;q<4;q++){
        int x=i+xx[q],y=j+yy[q];
        if (i+xx[q]>0&&i+xx[q]<=n&&j+yy[q]>0&&j+yy[q]<=m){
            if (arr[x][y]&&!vis[x][y])bfs(x,y);
            if (!arr[x][y])s.insert({x,y});
        }
    }
}


int main(){
    char c;
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>c;
            if (c=='1')arr[i][j]=1;
            else arr[i][j]=0;
        }
    }
    int ans=INT_MAX;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (!vis[i][j]&&arr[i][j]==1){
                s.clear();
                bfs(i,j);
                ans=min(ans,(int)s.size());
            }
        }
    }
    cout<<ans<<endl;
}