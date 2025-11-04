//
// Created by k0itoYuu on 2025/10/20.
//
#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n+5);
    vector<int>f(n+5);
    vector<int>e(n+5);
    for(int i=1;i<=m;i++){
        int l,r;
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
        f[l]++;
        e[r]++;
    }
    int q=0;
    vector<pp>p;vector<int>ans(n+5);
    for(int i=1;i<=n;i++){
        q+=v[i];
        if(q==m){
            for(int i=1;i<=n;i++){
                ans[i]=i-1;
            }
            swap(ans[i],ans[1]);
            for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
            cout<<endl;
            //cout<<"!!"<<endl;
            return;
        }
    }
    int now=0;q=0;
    for(int i=1;i<n;i++){
        if (e[i] == 0){

            ans[i]=0,ans[i+1]=1;
            for(int j=1;j<i;j++)ans[j]=j-1+2;
            for(int j=i+2;j<=n;j++)ans[j]=j-1;
            for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
            cout<<endl;
            return;
        }
        if (f[i + 1] == 0){
            ans[i+1]=0,ans[i]=1;
            for(int j=1;j<i;j++)ans[j]=j-1+2;
            for(int j=i+2;j<=n;j++)ans[j]=j-1;
            for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
            cout<<endl;
            return;
        }
    }
    cout<<"0 2 1 ";
    for(int i=4;i<=n;i++)cout<<i-1<<" ";
    cout<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
//0,1