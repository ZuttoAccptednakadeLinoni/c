//
// Created by k0itoYuu on 2025/7/11.
//
#include<bits/stdc++.h>

using namespace std;
int fa[200005],eu,ev,cnt,ans,pd;
int n,m;
struct Edge{
    int u,v,w;
}edge[200005];
int ma[200005];
int mi[200005];
bool cmp(Edge a,Edge b){
    return a.w<b.w;
}

int find (int x){
    while(x!=fa[x])x=fa[x]=fa[fa[x]];
    return x;
}
void kruskal(){
    sort(edge,edge+m,cmp);
    for(int i=0;i<m;i++){
        eu=find(edge[i].u),ev=find(edge[i].v);
        if(eu==ev)continue;

        fa[ev]=eu;
        ma[eu]=max(ma[eu],max(ma[ev],edge[i].w));
        mi[eu]=min(mi[eu],min(mi[ev],edge[i].w));
        if(find(1)==find(n)){
            ans=min(ans,ma[find(1)]+mi[find(1)]);
            pd=1;
            //break;
        }
    }
}
void solve(){
    cin>>n>>m;
    ans=INT_MAX;
    for(int i=1;i<=n;i++){
        fa[i]=i;
        ma[i]=-1;
        mi[i]=INT_MAX;
    }
    for(int i=0;i<m;i++){
        cin>>edge[i].u>>edge[i].v>>edge[i].w;
    }
    kruskal();
    //cout<<find(1)<<find(n)<<endl;
    if(!pd)cout<<"orz";
    else cout<<ans<<endl;
}
int main(){

    int t;
    cin>>t;
    while(t--)solve();
}