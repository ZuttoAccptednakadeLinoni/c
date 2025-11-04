#include<bits/stdc++.h>
using namespace std;
long long t[3005][3005];
int d[3005][3005];
int f[3005][3005];
bool vis[3005][3005];
int n,m,l;
int xy[2][4]={{-1,0,1,0},{0,1,0,-1}};
struct zb{
	int w,x,y;
bool operator < ( const zb& b) const  //·¨¶þ
    {
        return w < b.w;
    }
};
//vector<pair<int,int>>e[3005][3005];
queue<zb>q;
priority_queue<zb>pq;

void solve(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int ta,tb,g,h;
	char c;
	cin >> n >> m >> l;
	cin >> ta >> tb;
//	scanf("%d%d%d",&n,&m,&l);
//	scanf("%d%d",&ta,&tb);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			t[i][j]=LONG_MIN;
		}
	}
	t[ta][tb]=0;
	for(int i=2;i<=l;i++){
		cin >> g >> h;
		//scanf("%d%d",&g,&h);
		f[g][h]=-(l-i);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>c;
			if((char)c=='#')t[i][j]=1;
			
		}
	}

	q.push({0,ta,tb});
	vis[ta][tb]=1;
	while(!q.empty()||!pq.empty()){
		int w,x,y;
		if((!q.empty()&&!pq.empty()&&pq.top().w>q.front().w)||(q.empty()&&!pq.empty())){
			auto tq=pq.top();
			w=tq.w;
			x=tq.x,y=tq.y;
			pq.pop();
		}else{
			auto tq=q.front();
			q.pop();
			w=tq.w;
			x=tq.x,y=tq.y;	
		}
		for(int i=0;i<4;i++){
			int nx=x+xy[0][i],ny=y+xy[1][i];
			if(nx<=0||nx>n||ny<=0||ny>m)continue;
			if(vis[nx][ny]||t[nx][ny]==1)continue;
			vis[nx][ny]=1;
			if(t[nx][ny]<min(w-1,f[nx][ny]-1)){
				if(f[nx][ny]!=0){
					t[nx][ny]=min(w-1,f[nx][ny]-1);
					pq.push({t[nx][ny],nx,ny});
				}else{
					t[nx][ny]=min(w-1,f[nx][ny]-1);
					q.push({t[nx][ny],nx,ny});
				}
			}
/*			t[nx][ny]=max(w+1,t[nx][ny]);
			q.push({t[nx][ny],{nx,ny}});*/
		}
		
	}
	unsigned long long ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(t[i][j]==1||t[i][j]==LONG_MIN)continue;
			ans+=t[i][j]*t[i][j];
//			cout << t[i][j] << ' ';
		}
//		cout << '\n';
	}
	cout << ans << '\n';
	return ;
}
int main(){
	solve();
	return 0;
} 
