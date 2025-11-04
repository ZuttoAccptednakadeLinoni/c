//
// Created by k0itoYuu on 2025/11/3.
//
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
int arr[200005];
int vis[200005];
vector<int>v[200005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,x;

    cin>>n>>x;
    priority_queue<pp,vector<pp>,greater<pp>>q;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v[i].push_back(arr[i]);
        v[i+n].push_back(arr[i]);
    }

    for(int i=arr[0];i<2*n;i++){
        v[i].push_back(1);
    }
    q.push({1,arr[0]});
    //vis[0]=1;
    //for(auto i:v[2])cout<<i<<" ";
    cout<<endl;
    while(!q.empty()){
        auto i=q.top();
        q.pop();

        int s=i.first,now=i.second;
        //cout<<s<<"|"<<now<<endl;
        if(vis[now])continue;
        vis[now]=1;
        if(now==x||now==x+n){
            //cout<<now<<"***";
            cout<<s<<"\n";
            return 0;
        }
        for(auto nx:v[now]){

            if(!vis[now+nx]){//cout<<s<<"!!"<<now+nx<<endl;
                q.push({s + 1, now+nx});
                if(now+nx>=n)q.push({s + 1, (now+nx)%n});
            }
        }
    }
}
/*
4 3
0 1 2 3
4 3
0 0 0 0
4 3
2 2 2 2
*/