//
// Created by k0itoYuu on 2025/8/4.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n<=6){
        int f=1;
        int ans=1;
        vector<int>v;
        map<int,int>m;
        for(int i=1;i<=n;i++){
            if(f==2){
                ans++;
                f=0;
            }
            f++;
            m[ans]++;
            v.push_back(ans);
        }
        cout<<m.size()<<endl;
        for(auto i:v)cout<<i<<" ";
        cout<<endl;
    }else{
        cout<<4<<endl;
        int f=1;
        for(int i=1;i<=n;i++){
            if(f>4)f=1;
            cout<<f<<" ";
            f++;
        }
        cout<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}