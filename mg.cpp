#include<bits/stdc++.h>
using namespace std;
int ap[10][10];
int mark[10][10];
typedef pair<int,int> PII;
int n,m;
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};//иообвСср 
int x1,y1,x2,y2;
void bfs(){
    memset(mark,-1,sizeof mark);
    queue<PII>q;
    q.push({x1,y1});
    int cnt=0;
    while(!q.empty()){
        PII top=q.front();
        for(int i=0;i<4;i++){
            int nex=top.first+dx[i],ney=top.second+dy[i];
            if(nex>=0&&nex<n&&ney>=0&&ney<m&&mark[nex][ney]==-1&&ap[nex][ney]==0){
                mark[nex][ney]=mark[nex][ney]+1;
                q.push({nex,ney});
            }
            PII top=q.front();
            if(top.first==x2&&top.second==y2){
                cnt++;
            }
        }
        q.pop();
    } 
    cout<<cnt;
}
int main(){
    int t;
    cin>>n>>m>>t;
    cin>>x1>>y1>>x2>>y2;
    int x,y;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        ap[x][y]=1;
    }
    bfs();
    
}
