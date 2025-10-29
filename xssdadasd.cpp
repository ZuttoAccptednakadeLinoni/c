#include<bits/stdc++.h>
using namespace std;
#define lc p<<1
#define rc p<<1|1
#define N 2000001
#define int long long
int n,m, w[N];
struct node {
	int l,r,sum,maxl,maxr,ans;
} tr[N*4];
void build(int p,int l,int r) {
	tr[p]= {l,r,w[l],w[l],w[l],w[l]};
	if(l==r)return;
	int m=(l+r)>>1;
	build(lc,l,m);
	build(rc,m+1,r);
	tr[p].sum=tr[lc].sum+tr[rc].sum;
	tr[p].maxl=max(tr[lc].maxl,tr[lc].sum+tr[rc].maxl);
	tr[p].maxr=max(tr[rc].maxr,tr[lc].maxr+tr[rc].sum);
	tr[p].ans=max(max(tr[lc].ans,tr[rc].ans),tr[lc].maxr+tr[rc].maxl);
	
}


node ask(int x,int y,int p){
	if(x<=tr[p].l&&tr[p].r<=y)return tr[p];
	int m=(tr[p].l+tr[p].r)>>1;
	if(y<=m)return ask(x,y,lc);
	else {
		if(x>m)return ask(x,y,rc);
		else {
			node t,a=ask(x,y,lc),b=ask(x,y,rc);
			t.maxl=max(a.maxl,a.sum+b.maxl);
			t.maxr=max(b.maxr,b.sum+a.maxr);
			t.ans=max(max(a.ans,b.ans),a.maxr+b.maxl);
			t.sum=a.sum+b.sum;
			return t;
		}
	}
}
void change(int p,int x,int y){
	if(tr[p].l==tr[p].r){
		tr[p].maxl=tr[p].maxr=tr[p].ans=tr[p].sum=y;
		return;
	}
	int m=(tr[p].l+tr[p].r)>>1;
	if(x<=m)change(lc,x,y);
    else change(rc,x,y);
    tr[p].sum=tr[lc].sum+tr[rc].sum;
	tr[p].maxl=max(tr[lc].maxl,tr[lc].sum+tr[rc].maxl);
	tr[p].maxr=max(tr[rc].maxr,tr[lc].maxr+tr[rc].sum);
	tr[p].ans=max(max(tr[lc].ans,tr[rc].ans),tr[lc].maxr+tr[rc].maxl);
    
}
signed main() {
	int op,x,y,k;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>w[i];
	}
	build(1,1,n);
	while(m--) {
		cin>>op>>x>>y;
		if(op==2)change(1,x,y);
		else {
			if(x>y)swap(x,y);
			node at=ask(x,y,1);
			printf("%lld\n",at.ans);
		}
	}
	return 0;
}
