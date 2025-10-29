#include<bits/stdc++.h>
using namespace std;
 
int dis[105][105][2];
typedef array <int,3> tri;
int main(){
	int n,m,p,q;
	cin>>n>>m>>p>>q;
	memset(dis,-1,sizeof(dis));
	queue<tri>Q; 
	Q.push({n,m,0});
	dis[n][m][0]=0;
	while(!Q.empty()){
		tri t=Q.front(); Q.pop();
        int x=t[0],y=t[1],tp=t[2];
        
		if(x==0)return printf("%d",dis[x][y][tp]),0;
		if(tp==0){
			for(int i=0;i<=min(p,x);i++){
				for(int j=0;j<=min(p-i,y);j++){
					if(x-i>0&&y-j>x-i+q)continue;
					if(dis[x-i][y-j][tp^1]==-1)
					dis[x-i][y-j][tp^1]=dis[x][y][tp]+1,
					Q.push({x-i,y-j,tp^1});
				}
			}
		}else{
			for (int i=0;i<=min(p,n-x);++i) 
			for (int j=0;j<=min(p-i,m-y);++j)
            {
                if (n-x-i>0&&m-y-j>n-x-i+q) continue;
                if (dis[x+i][y+j][tp^1]==-1)
                dis[x+i][y+j][tp^1]=dis[x][y][tp]+1,Q.push({x+i,y+j,tp^1});
            }
		}
	}
	return puts("-1"),0;
} 
