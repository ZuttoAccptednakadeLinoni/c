#include<bits/stdc++.h>
using namespace std;
int pre[10005];
int find(int x){
	if(x==pre[x])return x;
	return pre[x]=find(pre[x]);
}
int main(){
	int n,m,z,x,y;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		pre[i]=i;
	}
	while(m--){
		cin>>z>>x>>y;
		int a=find(x),b=find(y);
		if(z==1)pre[a]=b;
		if(z==2){
			if(a==b)cout<<"Y\n";
			else cout<<"N\n";
		}
	}
}
