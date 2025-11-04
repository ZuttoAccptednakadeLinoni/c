//
// Created by k0itoYuu on 2025/7/16.
//
//
// Created by k0itoYuu on 2025/7/14.
//
#include<bits/stdc++.h>
using namespace std;

#define pp pair<int,int>
int n,m,a,b,c;
const int N=200005,M=600005;
bool vis[M];

vector<int>arr[200005];
int ans[600005];
int si,en;
bool vi[200005];
#define pp pair<int,int>
map<pp,int>mp;
void dfs(int u,int d){
    //cout<<u<<" "<<arr[u][d-1]<<endl;
    int nxt=arr[u][d-1];
    int nxtd=d;
    if(!vis[u*3+d]){
        vis[u*3+d]=1;
        if(!mp[{min(u, arr[u][d - 1]), max(u, arr[u][d - 1])}]){
            si++;
            //cout<<min({u, arr[u][d - 1])<<" "<<max(u, arr[u][d-1]})<<endl;
            mp[{min(u, arr[u][d - 1]), max(u, arr[u][d - 1])}]++;
        }
        vi[u]=1;
        for(int i=0;i<arr[arr[u][d-1]].size();i++){
            if(arr[arr[u][d-1]][i]==u){
                d=i+2;
                break;
            }
        }
        if(d>arr[nxt].size())d=1;
        //cout<<"d"<<d<<endl;
        dfs(nxt,d);
    }
    ans[u*3+nxtd]=si;
    //cout<<u<<" "<<ans[u*3+nxtd]<<endl;
}
void solve(){

    cin>>n;
    for(int i=1;i<=n;i++){
        int q;
        cin>>q;
        for(int j=0;j<q;j++){
            int x;
            cin>>x;
            arr[i].push_back(x);

        }

    }
//    for(int i=1;i<=n;i++){
//        for(auto u:arr[i])cout<<u<<" ";
//        cout<<endl;
//    }
    //cout<<endl;
    for(int i=1;i<=n;i++){
        mp.clear();
        si=0;
        en=0;
        //cout<<"i"<<i<<endl;
        memset(vi,0,sizeof(vi));
        if(!vis[i*3+1]){
            dfs(i,1);
        }
        //cout<<"!"<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i*3+1]<<endl;
    }
}

int main(){
    int t=1;

    while(t--)solve();
}
/*
6
3 4 2 3
3 5 1 3
3 6 1 2
1 1
1 2
1 3
 */