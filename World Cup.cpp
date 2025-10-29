//
// Created by k0itoYuu on 2025/9/2.
//
#include<bits/stdc++.h>
using namespace std;
int ans[8]={0,32,16,8,4,2,1,1};
void solve(){
    vector<int>v;
    v.push_back(0);
    for(int i=1;i<=32;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int i;
    vector<int>f;
    f.push_back(0);
    for(i=1;i<=6;i++){
        if(v[1]<v[2])break;
        else{
            f.clear();
            f.push_back(0);
            for(int j=1;j<v.size();j+=2){
                f.push_back(max(v[j],v[j+1]));
            }
            v.clear();
            v.assign(f.begin(),f.end());
        }
    }
    //cout<<i<<endl;
    cout<<ans[i]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
1
30 8 31 29 28 27 26 25 24 23 22 21 20 8 19 1 17 16 15 14 13 12 11 10 9 32 7 6 5 4 3 2 1
*/