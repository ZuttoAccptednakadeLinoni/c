#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;
int map[1005][1005];
bool temp[1005][1005];
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
int total,fx,fy,sx,sy,T,n,m,l,r;
int ans=0;
void walk(int x,int y)
{
    if(x==fx&&y==fy)
    {
        total++;
        ans++;
        return;
    }
    else
    {
        for(int i=0;i<=3;i++)
        {
            if(x+dx[i]>0&&y+dy[i]>0&&x+dx[i]<n&&y+dy[i]<n&&temp[x+dx[i]][y+dy[i]]==0&&map[x+dx[i]][y+dy[i]]==1)
            {
                temp[x][y]=1;
                walk(x+dx[i],y+dy[i]);

            }    
        } 
    }
}
int main()
{
    cin>>n>>m>>T;
    for(int ix=1;ix<=n;ix++)
        for(int iy=1;iy<=m;iy++)
            map[ix][iy]=1;
    cin>>sx>>sy;
    cin>>fx>>fy; 
    for(int u=1;u<=T;u++)
    {
        cin>>l>>r;
        map[l][r]=0;
    }
    walk(sx,sy);
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
