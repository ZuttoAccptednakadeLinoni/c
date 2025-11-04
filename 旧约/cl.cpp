#include<bits/stdc++.h>
using namespace std;
int n,m,p,q,xl,yl,a[10002],b[10002],c1=1,c2=1;
int fd1(int x){
	if(a[x]==x)return x;
	else return a[x]=fd1(a[x]);
}
int fd2(int x){
	if(b[x]==x)return x;
	else return b[x]=fd2(b[x]);
}
void fuck1(int x,int y){
	a[fd1(y)]=fd1(x);
}
void fuck2(int x,int y){
	b[fd2(y)]=fd2(x);
}
main(void){
cin>>n>>m>>p>>q;
for(int i=1;i<=n;i++){
	a[i]=i;
}for(int i=1;i<=m;i++){
	b[i]=i;
}
for(int i=0;i<p;i++){
	cin>>xl>>yl;
	fuck1(xl,yl);
}for(int i=1;i<=q;i++){
	cin>>xl>>yl;
	xl=abs(xl);
	yl=abs(yl);
	fuck2(xl,yl);
}int j=fd1(1),k=fd2(1);
for(int i=2;i<=n;i++){
	if(j==fd1(i))c1++;
}for(int i=2;i<=m;i++){
	if(k==fd2(i))c2++;
}cout<<min(c1,c2);
return 0;
}
