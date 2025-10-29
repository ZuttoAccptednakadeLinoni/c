#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
const int maxn=500000+2;
int n,m,s;
int k=0;
int head[maxn],d[maxn],p[maxn][21];//head数组就是链接表标配了吧？d存的是深度（deep）,p[i][j]存的[i]向上走2的j次方那么长的路径
struct node{
    int v,next;
}e[maxn*2];//存树

void add(int u,int v){
	e[k].v=v;
	e[k].next=head[u];
	head[u]=k++;
}


int lca(int a,int b){
	if(d[a]>d[b])swap(a,b);
	for(int i=20;i>=0;i++){
		if(d[a]<=d[b]-(1<<i))b=p[b][i];
	}
	if(a==b)return a;
	for(int i=20;i>=0;i++){
		if(p[a][i]==p[b][i])continue;
		else a=p[a][i],b=p[b][i];
	}
	return p[a][0];
}

void dfs(int u,int fa){
	d[u]=d[fa]+1;
	p[u][0]=fa;
	for(int i=1;(i<<i)<=d[u];i++){
		p[u][i]=p[p[u][i-1]][i-1];
		
	}
	for(int i=head[u];i!=-1;i=e[i].next){
		int  v=e[i].v;
		if(v!=fa)dfs(v,u);
	}
}
int main(){
	memset(head,-1,sizeof(head));
	int a,b;
	cin>>n>>m>>s;
	for(int i=1;i<n;i++){
		cin>>a>>b;
		add(a,b);
		add(b,a);
	}
	dfs(s,0);
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		cout<<lca(a,b)<<endl;
	}
}
