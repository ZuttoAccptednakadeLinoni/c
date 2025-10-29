//
// Created by k0itoYuu on 2025/5/11.
//
#include<bits/stdc++.h>
#define pp pair<string,int>
using namespace std;
struct sc{
    string s;
    int id ,t;
    bool operator <(sc ss)const{
        if (id==ss.id)return t>ss.t;
        else return id>ss.id;
    }
};

priority_queue<sc>p;

int main(){
    int n,m;
    cin>>n>>m;
    queue<pp>y;
    queue<pp>r;
    map<string,int>mp;
    map<string,int>fi;
    map<string,int>se;
    int num=0;
    for (int i=1;i<=n;i++){
        string s;
        cin>>s;
        if (!fi[s]){
            fi[s]=1;
            p.push({s,num,0});
            num++;
        }
    //    mp[s]=1;
    }
    num=0;
    for (int i=1;i<=m;i++){
        string s;
        cin>>s;
        //cout<<s<<"!";
        p.push({s,i,1});
    //    mp[s]=1;
        if (!se[s]){
            p.push({s,num,1});
            se[s]=1;
            num++;
        }
    }
    while (!p.empty()){
        if (!mp[p.top().s])cout<<p.top().s<<'\n';
        mp[p.top().s]=1;
        p.pop();
    }
}
/*
14 10
THU
THU
THU
THU
XDU
THU
ZJU
THU
ZJU
THU
NJU
WHU
THU
HEU
PKU
THU
PKU
PKU
ZJU
NUPT
THU
NJU
CSU
ZJU
 */