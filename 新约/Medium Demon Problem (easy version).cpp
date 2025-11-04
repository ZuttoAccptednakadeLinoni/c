//
// Created by k0itoYuu on 2025/7/21.
//
// Luogu P2607 [ZJOI2008] 骑士
#include <bits/stdc++.h>
using namespace std;
int arr[200005];
int in[200005];
int l[200005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        in[i]=0;
        l[i]=0;
    }
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        in[arr[i]]++;
    }int ans=0;
    queue<int>q;
    for(int i=1;i<=n;i++)if(in[i]==0)q.push(i);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        while(in[u]==0){
            l[u]++;
            l[arr[u]]+=l[u];
            ans=max(ans,l[u]);
            in[arr[u]]--;
            u=arr[u];
        }
    }

    cout<<ans+2<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}

