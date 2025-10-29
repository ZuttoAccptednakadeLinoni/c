#include<bits/stdc++.h>
using namespace std;

long long t[10000][10000];
bool vis[10000][10000];
int xy[2][4]={{-1,0,1,0},{0,1,0,-1}};
int xyr[2][4]={{-2,0,2,0},{0,2,0,-2}};
int xys[2][4]={{-3,0,3,0},{0,3,0,-3}};
struct zb{
	int w,x,y,ls,i;
bool operator < ( const zb& b) const  //·¨¶þ
    {
        return w < b.w;
    }
};
priority_queue<zb>q;
int main(){
	int n,m,zx,zy;
	char qi;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>qi;
			if(qi=='#')t[i][j]=1;
			else if(qi=='.')t[i][j]=LONG_MIN;
			else if(qi=='S'){
				q.push({0,i,j,0,0});
				t[i][j]=0;
				vis[i][j]=1;
			}
			else if(qi=='T'){
				zx=i,zy=j;
				t[i][j]=LONG_MIN;
				cout<<zx<<" "<<zy<<endl;
			}
		}
	}
	cout<<endl;
	cout<<t[1][12]<<endl;
	while(!q.empty()){
		int w,x,y,ls;
		auto tq=q.top();
		q.pop();
		w=tq.w;
		x=tq.x,y=tq.y;ls=tq.ls;
		if(x==zx&&y==zy){
			cout<<w;
			return 0;
		}
		for(int i=0;i<4;i++){
			int nx=x+xy[0][i],ny=y+xy[1][i];
			if(nx<=0||nx>n||ny<=0||ny>m)continue;
			if(vis[nx][ny]||t[nx][ny]==1)continue;
			vis[nx][ny]=1;
			if(t[nx][ny]<w-1){
				t[nx][ny]=w-1;
				q.push({t[nx][ny],nx,ny});
			}
		}
	}
	cout<<-1;
} 
