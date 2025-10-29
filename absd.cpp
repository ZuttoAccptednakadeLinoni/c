//
// Created by k0itoYuu on 2025/5/13.
//
#include<bits/stdc++.h>
using namespace std;

int arr[100005];
vector<int>ve[100005];
bool vis[100005];
int ans[100005];
void bfs(int u){
    //cout<<ve[u].size()<<endl;
    for (int i=0;i<ve[u].size();i++){
        int q=ve[u][i];
        //cout<<u<<" "<<ans[q]<<" \n";
        while (ans[q]==INT_MAX){
            ans[q]=ans[u]+1;
            bfs(q);
            //cout<<q<<endl;
            q=arr[q];
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    //cout<<n<<m<<endl;
    arr[1]=1;
    for (int i=2;i<=n;i++){
        cin>>arr[i];
        //cout<<arr[i]<<"!!"<<endl;
        ans[i]=INT_MAX;
    }
    ans[1]=0;
    for (int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //cout<<u<<v<<endl;
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    //cout<<"!!!\n";
    bfs(1);
    for (int i=2;i<=n;i++){
        if (ans[i]==INT_MAX)cout<<-1<<" ";
        else cout<<ans[i]<<" ";
    }
}
/*
10 6
1 2 1 4 4 6 7 2 9
1 4
3 6
3 7
9 4
5 10
3 4

 */
