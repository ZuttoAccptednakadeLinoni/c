#include<bits/stdc++.h>
using namespace std;
struct jg{
	int p,i;
};
jg mmax(jg a,jg b){
	return a.p>b.p?a:b;
}
jg mmin(jg a,jg b){
	return a.p<b.p?a:b;
}
jg a[150],tree[600];
void build(int node,int start ,int end){
	if(start==end){
		tree[node]=a[start];
		return;
	}
	int lnode=node*2;
	int rnode=node*2+1;
	int mid=(start+end)/2;
	build(lnode,start,mid);
	build(rnode,mid+1,end);
	tree[node]=mmax(tree[lnode],tree[rnode]);
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=(1<<n);i++){
		cin>>a[i].p;
		a[i].i=i;
	}
	build(1,1,(1<<n));
	cout<<mmin(tree[2],tree[3]).i<<endl;
} 
