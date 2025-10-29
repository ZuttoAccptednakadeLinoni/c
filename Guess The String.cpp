//
// Created by k0itoYuu on 2025/8/6.
//
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,char>
char c[1005];
void solve(){
    int n;
    cin>>n;
    int now=0;
    char ch;
    vector<pp>v;
    v.push_back({1,'1' });
    for(int i=1;i<=n;i++){
        cout<<"? 2 1 "<<i<<endl;
        int q;
        cin>>q;
        if(q!=now){
            cout<<"? 1 "<<i<<endl;
            cin>>ch;
            c[i]=ch;
            now++;
            v.push_back({i,ch});
            continue;
        }
        int l=1,r=v.size()-1;
        int e=-1;
        while(l<=r){
            int m=(l+r)/2;
            //cout<<l<<r<<m<<endl;
            cout<<"? 2 "<<v[m].first<<" "<<i<<endl;
            cin>>q;
            //cout<<q+m-1<<v.size()<<endl;
            if(q+m-1<=v.size()-1){
                e=m;l=m+1;

            }else r=m-1;
            //cout<<e<<endl;
        }
        c[i]=v[e].second;
        v[e].first=i;
        sort(v.begin(),v.end());
    }
    cout<<"! ";
    for(int i=1;i<=n;i++)cout<<c[i];
    cout<<endl;
}


int main(){
    int t=1;
    while(t--)solve();
}