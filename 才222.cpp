#include<bits/stdc++.h>
using namespace std;

struct zb {
	int x,y;
}f[2005][2005];
int a[200005];
int main() {
	int n,x,y,ans=0;
	char q;
	cin>>n>>x>>y;
	for(int i=1; i<=n; i++) {
		cin>>q;
		if(q=='A')f[i][1]= {-1,0};
		else if(q=='D')f[i][1]= {1,0};
		else if(q=='W')f[i][1]= {0,1};
		else if(q=='S')f[i][1]= {0,-1};
	}
	for(int j=2; j<=n; j++) //枚举区间长度
		for(int i=1; i+j-1<=n; i++) {
			f[i][j].x=f[i][j-1].x+f[j+i-1][1].x;
			f[i][j].y=f[i][j-1].y+f[j+i-1][1].y;
			if(f[i][j].x==x&&f[i][j].y==y||a[i]==1) {
				ans++;
				a[i]=1;
			}
		}
	for(int j=1; j<=n; j++){
		for(int i=1; i+j-1<=n; i++){
			cout<<f[i][j].x<<" "<<f[i][j].y<<"! ";
		}
		cout<<endl;
	}		
	cout<<ans;
}
