#include<bits/stdc++.h>
using namespace std;
int Max=0;
struct node{
	int l,r;
}a[1001000];
void dfs(int root,int step){
	if(root==0)return;
	Max=max(Max,step);
	dfs(a[root].l,step+1);
	dfs(a[root].r,step+1);
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].l>>a[i].r;
	}
	dfs(1,1);
	cout<<Max;
}
