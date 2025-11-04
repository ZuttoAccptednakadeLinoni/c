//
// Created by k0itoYuu on 2025/5/17.
//
#include<cstdio>
#include<algorithm>
using namespace std;
int a[505][505];
int m,x,y,cnt[505],s=1024,n,p[1030],size;
void dfs(int x)
{
    for(int i=1;i<=n;i++)if(a[i][x])
    {
        //printf("%d\n",x);
        a[i][x]--;a[x][i]--;
        dfs(i);
    }
    p[size++]=x;
}
int main()
{
    for(scanf("%d",&m);m--;)
    {
        scanf("%d%d",&x,&y);
        a[x][y]++;a[y][x]++;//a[x][y]=a[y][x]=1;
        cnt[x]++;cnt[y]++;
        n=max(n,max(y,x));
        s=min(s,min(x,y));
    }
    for(int i=1;i<=n;i++)
        if(cnt[i]&1)
        {
            s=i;
            break;
        }
    //printf("%d\n",s);
    dfs(s);
    for(int i=size-1;i>=0;i--)printf("%d\n",p[i]);
    return 0;
}