#include<cstdio>
#include<iostream>
#include<queue>
#include<utility>
#include<cstring>
#include<array>
#define RI register int
#define CI const int&
using namespace std;
typedef array <int,3> tri;
const int N=105;
int n,m,p,q,dis[N][N][2];
int main()
{
    RI i,j; scanf("%d%d%d%d",&n,&m,&p,&q); memset(dis,-1,sizeof(dis));
    queue <tri> Q; Q.push({n,m,0}); dis[n][m][0]=0;
    while (!Q.empty())
    {
        tri t=Q.front(); Q.pop();
        int x=t[0],y=t[1],tp=t[2];
        
        //printf("dis[%d][%d][%d] = %d\n",x,y,tp,dis[x][y][tp]);
        if (x==0) return printf("%d",dis[x][y][tp]),0;
        if (tp==0)
        {
            for (i=0;i<=min(p,x);++i) for (j=0;j<=min(p-i,y);++j)
            {
                if (x-i>0&&y-j>x-i+q) continue;
                if (dis[x-i][y-j][tp^1]==-1)
                dis[x-i][y-j][tp^1]=dis[x][y][tp]+1,Q.push({x-i,y-j,tp^1});
            }
        } else
        {
            for (i=0;i<=min(p,n-x);++i) for (j=0;j<=min(p-i,m-y);++j)
            {
                if (n-x-i>0&&m-y-j>n-x-i+q) continue;
                if (dis[x+i][y+j][tp^1]==-1)
                dis[x+i][y+j][tp^1]=dis[x][y][tp]+1,Q.push({x+i,y+j,tp^1});
            }
        }
    }
    return puts("-1"),0;
}
