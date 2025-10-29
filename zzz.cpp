#include<bits/stdc++.h>
using namespace std;
int n,m;
int t[505][505];
bool vis[505][505];
bool visn[505][505];
int xy[2][4]={{-1,0,1,0},{0,1,0,-1}};
int dxy[2][8]={{-1,-1,0,1,1,1,0,-1,},{0,1,1,1,0,-1,-1,-1}};
struct zb{
	int w,x,y;
};
queue<zb>q;
int a[505][505];
queue<zb>p;
void bfs2(){
	int ans=INT_MAX;
	while(!p.empty()){
		auto t = p.front();
		p.pop();
		for(int i=0;i<8;i++){
			int tx=t.x+dxy[0][i],ty=t.y+dxy[1][i],w=t.w;
			if(tx<1||tx>n||ty<1||ty>m||a[tx][ty]==1||vis[tx][ty]) continue;
			vis[tx][ty]=1;
			p.push({w+1,tx,ty});
			if(tx==1||ty==m){
				ans=min(ans,w+1);
			}
		}
	}
	cout<<ans;	
}
void bfsn(){
	int ans=0;
	q.push({1,n,m});
	visn[n][m]=1;
	while(!q.empty()){
		auto tq=q.front();
		q.pop();
		int w=tq.w;
		int x=tq.x,y=tq.y;
		for(int i=0;i<4;i++){
			int nx=x+xy[0][i],ny=y+xy[1][i];
			if(nx<=0||nx>n||ny<=0||ny>m)continue;
			if(visn[nx][ny])continue;
			if(nx==1&&ny==1){
				cout<<-1;
				return ;
			}
			visn[nx][ny]=1;
			if(a[nx][ny]==0){
				
			}else{
				q.push({1,nx,ny});
			}
		}
		
	}
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (i != n && j != 1 ) continue;
            if (a[i][j] == 0)
                p.push({1,i,j});
        }
    bfs2();
	return ;
	 
}
//4 4
//1 1 1 1
//1 0 1 1
//1 0 1 1
// 1 1 1 1
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
		bfsn();
}

int main(){
	solve();
} 
