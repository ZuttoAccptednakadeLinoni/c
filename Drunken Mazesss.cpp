#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define f first
#define se second
vector<int>fx={0,0,1,-1};
vector<int>fy={1,-1,0,0};
void solve(){
  int n,m;
  cin>>n>>m;
  string s[n];
  for(int i=0;i<n;i++)cin>>s[i];
  int d[n][m][4];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        for(int k=0;k<4;k++)d[i][j][k]=1e9;
    }
  }
  pair<int,int>st,en;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(s[i][j]=='S')st={i,j};
        if(s[i][j]=='T')en={i,j};
    }
  }
  priority_queue<array<int,4>>q;
  for(int i=0;i<4;i++){
    d[st.f][st.se][i]=0;
    q.push({0,st.f,st.se,i});
  }

  while(!q.empty()){
    auto [w,x,y,fl]=q.top();
    w=-w;
    q.pop();
    //cout<<x<<" "<<y<<" "<<w<<" "<<fl<<'\n';
    if(x==en.f and y==en.se){
        cout<<w<<'\n';
        return;
    }
    if(d[x][y][fl]!=w)continue;
    for(int i=0;i<4;i++){
        if(i==fl)continue;
        for(int j=1;j<=3;j++){
            int nx=x+j*fx[i],ny=y+j*fy[i];
            if(nx<0 || nx>=n || ny<0 || ny>m )continue;
            if(s[nx][ny]=='#')break;
            if(d[nx][ny][i]>w+j){
                d[nx][ny][i]=w+j;
                q.push({-(w+j),nx,ny,i});
                //cout<<x<<" "<<y<<" "<<nx<<"  "<<ny<<" "<<d[nx][ny][i]<<'\n';
            }
        }
    }
  }
  cout<<-1<<'\n';
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t=1;
//  cin>>t;
  while(t--)solve();
}

