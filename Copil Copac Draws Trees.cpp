//
// Created by k0itoYuu on 2025/6/16.
//
#include<bits/stdc++.h>
using namespace std;

struct nd{
    int v,m;
};
vector<nd>arr[200005];
int vis[200005];
void solve(){
    int n;
    cin>>n;
    //cout<<1<<endl;
    for (int i=0;i<=n;i++){
        arr[i].clear();
        vis[i]=0;
    }
    //cout<<1<<endl;
    for (int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        arr[u].push_back({v,i});
        arr[v].push_back({u,i});
    }
    queue<nd>s[2];
    s[0].push({1,0});
    int num=1;
    int ans=0;
    //cout<<1<<endl;
    while (num<=n){
        while (!s[ans%2].empty()){
            auto au=s[ans%2].front();
            s[ans%2].pop();
            num++;
            //cout<<"to"<<au.v<<endl;;
            for (auto ne:arr[au.v]){
                if (!vis[ne.v]){
                    if (ne.m>au.m){
                        s[ans%2].push(ne);
                        //cout<<ne.v<<" "<<1<<endl;
                        //num++;
                    }
                    else{
                        s[(ans+1)%2].push(ne);
                        //cout<<ne.v<<" "<<2<<endl;
                    }

                    vis[au.v]=1;
                }

            }

        }
        //cout<<num<<endl;
        ans++;
        //cout<<ans<<endl;
        //cout<<endl;


    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}
/*
2
6
4 5
1 3
1 2
3 4
1 6
 */