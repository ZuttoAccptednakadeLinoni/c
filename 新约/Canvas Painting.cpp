//
// Created by k0itoYuu on 2025/9/9.
//
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>

void solve(){
    int m,n;
    cin>>m>>n;
    priority_queue<int,vector<int>,greater<int>>p;
    vector<pp>arr;
    for(int i=0;i<m;i++){
        int a,s;
        cin>>a>>s;
        if(a<s)arr.push_back({a,s});
    }
    sort(arr.begin(),arr.end());
    m=arr.size();
    int now=1;
    int ans=n;
    int i=0;
    while(now<n){
        while(i<m&&arr[i].first<=now)p.push(arr[i].second),i++;
        while(!p.empty()&&p.top()<=now){
            p.pop();
        }
        if(!p.empty()){
            ans--;
            p.pop();
            now++;
        }else {
            if(i>=m)break;
            now=arr[i].first;
        }

    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
4
3 3
1 3
2 2
2 3
4 4
1 4
2 3
2 3
4 4
6 7
1 4
2 3
3 4
3 6
5 7
5 6
2 1
1 1
1 1
*/