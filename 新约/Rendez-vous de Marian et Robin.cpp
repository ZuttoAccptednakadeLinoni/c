//
// Created by k0itoYuu on 2025/9/5.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
#define pp pair<int ,int>
int tmm[400005];int tr[400005];
int vism[400005],visr[400005];int n,m,h;
vector<vector<pp>>ve(2*200000+5);
struct node{
    int first, second;
    bool operator<(const node &w)const{
        return first > w.first;
    }
};
void djstlm(){
    priority_queue<node>q;
    q.push({0,1});
    while(!q.empty()){
        auto i=q.top();
        //cout<<i.second<<endl;
        q.pop();if(vism[i.second])continue;
        vism[i.second]=1;

        for(auto v:ve[i.second]){
            if(tmm[v.first]>=tmm[i.second]+v.second){
                tmm[v.first]=tmm[i.second]+v.second;
                if(!vism[v.first])q.push({tmm[v.first],v.first});
            }
        }
    }
}
void djstlr(){
    priority_queue<node>q;
    q.push({0,n});
    while(!q.empty()){
        auto i=q.top();
        //cout<<i.second<<endl;
        q.pop();if(visr[i.second])continue;
        visr[i.second]=1;

        for(auto v:ve[i.second]){
            if(tr[v.first]>=tr[i.second]+v.second){
                tr[v.first]=tr[i.second]+v.second;
                if(!visr[v.first])q.push({tr[v.first],v.first});
            }
        }
    }
}
void solve(){

    cin>>n>>m>>h;
    for(int i=1;i<=n*2;i++){
        vism[i]=0,visr[i]=0;tmm[i]=LLONG_MAX;tr[i]=LLONG_MAX;
        ve[i].clear();
    }
    tmm[1]=0;
    tr[n]=0;
    for(int i=1;i<=h;i++){
        int q;
        cin>>q;
        ve[q].push_back({q+n,0});
    }
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        ve[u].push_back({v,w});
        ve[v].push_back({u,w});
        ve[u+n].push_back({v+n,w/2});
        ve[v+n].push_back({u+n,w/2});
    }
    djstlm();
//    for(int i=1;i<=2*n;i++){
//        cout<<tmm[i]<<" "<<i<<endl;
//    }
//    cout<<"_________\n";
    djstlr();
//    for(int i=1;i<=2*n;i++){
//        cout<<tr[i]<<" "<<i<<endl;
//    }
    int ans=LLONG_MAX;
    for(int i=1;i<=n;i++){
        ans=min(ans,max(min(tmm[i],tmm[i+n]),min(tr[i],tr[i+n])));
    }
    if(ans==LLONG_MAX){
        cout<<-1<<endl;
        return ;
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        //cout<<t<<"________"<<endl;
        solve();
    }
}