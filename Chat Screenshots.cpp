//
// Created by k0itoYuu on 2025/7/26.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
vector<int>v[200005];
int in[200005];
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<=n;i++){
        v[i].clear();
        in[i]=0;
    }
    for(int i=0;i<k;i++){
        int c;
        cin>>c;

        for(int j=1;j<n;j++){
            cin>>arr[j];
            //cout<<arr[j]<<" ";
        }
        //cout<<endl;
        for(int j=1;j<n-1;j++){
            v[arr[j+1]].push_back(arr[j]);
            in[arr[j]]++;
            //cout<<arr[j]<<" ";
        }
        //cout<<endl;
    }
    queue<int>q;
    for(int i=1;i<=n;i++){
        //cout<<in[i]<<" ";
        if(!in[i])q.push(i);
    }
    //cout<<endl;
    int num=0;
    while(!q.empty()){
        num++;
        int w=q.front();
        q.pop();
        //cout<<w<<endl;
        for(auto i:v[w]){
            in[i]--;
            if(!in[i])q.push(i);
        }
    }
    if(num==n)cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}