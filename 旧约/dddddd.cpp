#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[25];
int b[25];
int n,m;
int volume=0,value=0;
int maxv=0;
void dfs(int i){
    if(i>n){
        return;
    }
    if(volume+a[i]<=m){
        volume+=a[i];
        value+=b[i];
        maxv=max(maxv,value);
        dfs(i+1);
        volume-=a[i];
        value-=b[i];
    }
    dfs(i+1);
}
signed main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    dfs(1);
    cout << maxv;
}
