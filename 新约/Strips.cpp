//
// Created by k0itoYuu on 2025/8/13.
//
#include<bits/stdc++.h>
using namespace std;
struct g{
    int l,c;
};
bool cmp(g a,g b){
    return a.l<b.l;
}
void solve(){
    int n,m,k,w;
    vector<g>v;
    cin>>n>>m>>k>>w;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back({q,0});
    }
    for(int i=0;i<m;i++){
        int q;
        cin>>q;
        v.push_back({q,1});
    }

    vector<int>ans;
    v.push_back({w + 1, 1});
    v.push_back({0,1});
    sort(v.begin(),v.end(),cmp);

    int bi=0;int end;vector<int>q;

    for(int i=1;i<v.size();i++){
        if(v[i].c!=1){
            q.push_back(v[i].l);
            //cout<<v[i].l<<" ";
        }
        else{
            //cout<<"!\n";
            end=v[i].l;
            vector<int>ve;
            if(q.empty()){
                bi=v[i].l;
                continue;
            }
            for(int j=0;j<q.size();j){
                ve.push_back(q[j]);
                int w=q[j]+k;
                //cout<<"w"<<w<<endl;
                while(q[j]<w&&j<q.size())j++;
            }
            int e=*ve.rbegin();
            //cout<<e+k-1<<"|"<<end<<endl;
            while(!ve.empty()&&e+k-1>=end){
                //cout<<"e"<<e<<endl;
                e-=e+k-end;
                ans.push_back(e);
                //cout<<e<<endl;
                ve.pop_back();
                end=e;
                if(!ve.empty())e=*ve.rbegin();
                //cout<<"end"<<end<<endl;
            }

            if(end<=bi){
                cout<<-1<<endl;
                return;
            }//cout<<"!"<<endl;
            while(!ve.empty()){
                ans.push_back(*ve.rbegin());
                ve.pop_back();
            }
            bi=v[i].l;
            q.clear();
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
4
5 2 3 16
7 11 2 9 14
13 5
3 2 4 11
6 10 2
1 11
2 1 2 6
1 5
3
2 1 2 6
1 5
2
 */