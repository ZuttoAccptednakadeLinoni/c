//
// Created by k0itoYuu on 2025/8/17.
//
#include<bits/stdc++.h>
using namespace std;
#define lc p<<1
#define rc p<<1|1
#define mid ((l+r)>>1)
const int N=4e5+7,M=1e6+7;
//#define int long long
const int inf=1e7;
int n,id[N<<2];
struct node {
    int l,r,max,add;
} tr[N<<2];
void pushup(int p){
    tr[p]=tr[lc],id[p]=id[lc];
    if(tr[rc].max>tr[p].max) tr[p].max=tr[rc].max,id[p]=id[rc];
}
void pushdown(int p){
    tr[lc].max+=tr[p].add,tr[rc].max+=tr[p].add;
    tr[lc].add+=tr[p].add,tr[rc].add+=tr[p].add;
    tr[p].add=0;
}
void build(int p,int l,int r){
    tr[p].max=tr[p].add=0;
    if(l==r) return id[p]=l,void();
    build(lc,l,mid);
    build(rc,mid+1,r);
    pushup(p);
}
void upd(int p,int l,int r,int ll,int rr,int x){
    if(ll<=l&&rr>=r) return tr[p].max+=x,tr[p].add+=x,void();
    pushdown(p);
    if(ll<=mid) upd(lc,l,mid,ll,rr,x);
    if(rr>mid) upd(rc,mid+1,r,ll,rr,x);
    pushup(p);
}
//void update(int p,int x,int y,int k) {
//    if(x<=tr[p].l&&tr[p].r<=y) {
//        tr[p].max+=k;
//        tr[p].add+=k;
//        return;
//    }
//    int m=(tr[p].l+tr[p].r)>>1;
//    pushdown(p);
//
//    if(x<=m)update(lc,x,y,k);
//    if(y>m)update(rc,x,y,k);
//    pushup(p);
//    return;
//}

int arr[M];
int lst[M];
int nxt[M];
void solve(){
    int op,x,y,k,f=0;
    cin>>n;build(1,1,n);
    for(int i=1;i<=n;i++) nxt[i]=lst[i]=0;
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=n;i;i--) nxt[i]=lst[arr[i]],lst[arr[i]]=i;
    for(int i=1;i<=n;i++) lst[arr[i]]=i;
//    for(int i=1;i<=n;i++){
//        cout<<nxt[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=1;i<=n;i++){
//        cout<<lst[i]<<" ";
//    }
//    cout<<endl;

    set<int>s;
    s.clear();
    int ans=-1;
    int b1,b2;
    upd(1,1,n,1,1,-inf);
    for(int i=1;i<n;i++){
        upd(1,1,n,i+1,i+1,-inf);
        int cnt=s.count(arr[i]);
        if(cnt&&nxt[i]) upd(1,1,n,i+2,nxt[i],-1);
        else if(!cnt&&nxt[i]) upd(1,1,n,nxt[i]+1,lst[arr[i]],1);
        if(!cnt) s.insert(arr[i]);
        if(tr[1].max>ans) ans=tr[1].max,b1=i+1,b2=id[1];
    }
    cout<<ans<<endl<<b1<<" "<<b2<<endl;
//    update(1,1,1,-inf);
//    for(int i=1;i<n;i++){
//        update(1,i+1,i+1,-inf);
//        int ft=(s.find(arr[i])!=s.end());
//        if(ft&&(nxt[i])){
//            update(1,i+2,nxt[i],-1);
//        }else if(!ft&&(nxt[i])){
//            s.insert(arr[i]);
//            update(1,nxt[i]+1,lst[arr[i]],1);
//        }
//        //cout<<query(1,1,n)<<endl;
//
//        if(ans<tr[1].max){
//            ans=tr[1].max;
//            f=i+1;
//            ff=id[1];
//        }
//    }
//    cout<<ans<<"\n";
//    if(ans==0){
//        cout<<2<<" "<<3<<endl;
//        return;
//    }
//    cout<<b1<<" "<<b2<<endl;
}
signed main() {
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
/*
3
9
1 2 3 3 2 1 2 3 1
10
3 3 2 2 2 3 2 1 1 1
10
4 3 3 3 4 4 3 4 3 3
 */