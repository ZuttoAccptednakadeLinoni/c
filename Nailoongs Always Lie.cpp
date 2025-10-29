// Luogu P2607 [ZJOI2008] 骑士
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N=1e6+10;
typedef long long LL;
int n;
struct edge{int v,ne;}e[N];
int h[N],w[N],idx;
int r1,r2,vis[N];
LL f[N][2],sum;

void add(int a,int b){
    e[++idx]={b,h[a]};
    h[a]=idx;
}
void find(int u,int rt){//找两个根
    vis[u]=1;
    for(int i=h[u];i;i=e[i].ne){
        int v=e[i].v;
        if(v==rt){r1=u,r2=v;return;}
        if(vis[v])continue;
        find(v,rt);
    }
}
LL dfs(int u,int rt){//树上DP
    f[u][0]=0; f[u][1]=w[u];
    for(int i=h[u];i;i=e[i].ne){
        int v=e[i].v;
        if(v==rt)continue;
        dfs(v,rt);
        f[u][0]+=max(f[v][0],f[v][1]);
        f[u][1]+=f[v][0];
    }
    return f[u][0];
}
int main(){
    scanf("%d",&n);
    for(int v=1,u;v<=n;v++){
        scanf("%d",&u);
        w[v]=1;
        add(u,v);//单向边
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            r1=r2=0;
            find(i,i);
            if(r1){
                LL res1=dfs(r1,r1);
                LL res2=dfs(r2,r2);
                sum+=max(res1,res2);
            }
        }
    }
    printf("%lld",sum);
    return 0;
}