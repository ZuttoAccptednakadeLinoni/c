#include<bits/stdc++.h>
using namespace std;
int sx,sy,fx,fy,xq,yq;
int arr[1005][1005];
int mg[1005][1005];
int ans=0;
int xx[4]={0,0,1,-1};
int yy[4]={-1,1,0,0};
int d[1005][1005];
struct node{
	int x,y;
};

int main(){
	int n,m,t;
	cin>>n>>m>>t;
	
	cin>>sx>>sy>>fx>>fy;
	queue<node> q;
	for(int i=0;i<t;i++){
		cin>>xq>>yq;
		arr[xq][yq]++;
	}
	q.push((node){sx,sy});
	while(!q.empty()){
		node x;
		x=q.front();
		if(x.x==fx&&x.y==fy){
			cout<<"YES\n";
			return 0;
		}
		q.pop();
		for(int i=0;i<=3;i++)
        {
            if(x.x+xx[i]>0&&x.y+yy[i]>0&&x.x+xx[i]<=n&&x.y+yy[i]<=m&&arr[x.x+xx[i]][x.y+yy[i]]==0&&mg[x.x+xx[i]][x.y+yy[i]]==0)
            {
                q.push((node){x.x+xx[i],x.y+yy[i]});
                mg[x.x+xx[i]][x.y+yy[i]]=1;
            }    
        }
	}
	cout<<"NO\n";
	return 0;
}
