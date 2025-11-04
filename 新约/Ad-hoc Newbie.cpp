//
// Created by k0itoYuu on 2025/7/23.
//
#include<bits/stdc++.h>
using namespace std;
struct node {
    int x,id;
};
node arr[1500];
int d[1500];
int vis[1500];
bool cmp(node a,node b){
    return a.x<b.x;
}
int ans[1500][1500];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
     cin>>arr[i].x;
     arr[i].id=i;
    }
    sort(arr,arr+n+1,cmp);
    for(int i=1;i<=n;i++){
        d[i]=-1;
        vis[i]=0;
        for(int j=1;j<=n;j++){
            ans[i][j]=-1;
        }
    }
    for(int i=1;i<=n;i++){
        vis[arr[i].x]++;
        if(arr[i].x!=arr[i-1].x){
            d[i]=arr[i-1].x;
            vis[arr[i-1].x]++;

        }
    }
    int now=0;
    for(int i=1;i<=n;i++){
        if(d[i]!=-1)continue;
        while(vis[now])now++;
        d[i]=now;
        vis[now]++;
    }
//    for(int i=1;i<=n;i++)cout<<d[i]<<" ";
//    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(ans[arr[i].id][j]==-1)ans[arr[i].id][j]=d[i];
        }
        for(int j=1;j<=n;j++){
            if(ans[j][arr[i].id]==-1)ans[j][arr[i].id]=d[i];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}