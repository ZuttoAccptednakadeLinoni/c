#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
vector<int>v[100000];
vector<int>vis[100000];
int xx[4]={0,1,0,-1};
int yy[4]={1,0,-1,0};

int main(){
	int n,m;char c; 
	cin>>n>>m;
	int q;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c;
			q=c-'0';
			v[i].push_back(q);
			vis[i].push_back(0);
		}
	}
	int ans=0,b=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j]>0&&!vis[i][j]){
			//	cout<<v[i][j]<<" "<<vis[i][j]<<"!!";
				int f=0;
				if(v[i][j]>1)f=1;
				ans++;
				queue<pp>q;
				q.push({i,j});
				while(!q.empty()){
					pp qw=q.front();
				//	cout<<"!"<<qw.first<<" "<<qw.second<<endl;
					int px=q.front().first;
					int py=q.front().second;
					q.pop();
					//cout<<v[px][py]<<" "<<vis[px][py]<<"!!";
					for(int e=0;e<4;e++){
					//	cout<<e<<endl;
					//	cout<<v[px][py]<<" "<<vis[px][py]<<"!!";
						if(px+xx[e]>=0&&px+xx[e]<n&&py+yy[e]>=0&&py+yy[e]<m&&!vis[px+xx[e]][py+yy[e]]&&v[px+xx[e]][py+yy[e]]>0){
							vis[px+xx[e]][py+yy[e]]=1;
							q.push({px+xx[e],py+yy[e]});
							if(v[px+xx[e]][py+yy[e]]>1)f=1;
							
						}
					//	cout<<"###";
					}
				//	cout<<"###";
				}
				b+=f;
			}
		//	cout<<endl<<b;
		}
	}
	cout<<ans<<" "<<b;
} 
