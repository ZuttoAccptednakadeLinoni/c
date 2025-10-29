//
// Created by k0itoYuu on 2025/5/25.
//
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>v;
    int ans=0;
    int z=0,y=0;
    for (int i=0;i<=m;i++)arr[i]=0;
    for (int i=0;i<n;i++){
        int q;
        cin>>q;
        if (q==-1)z++;
        else if (q==-2)y++;
        else{
            if (!arr[q]){
                v.push_back(q);
                arr[q]++;
            }
        }
    }
    sort(v.begin(),v.end());
    ans=min(z+(int)v.size(),m);
    //cout<<ans<<endl;
    ans=max(ans,min(y+(int)v.size(),m));
    //cout<<ans<<endl;
    int num=0;
    for (auto i:v){
        int zz=min(i-1,z+num);
        int yy=min(m-i+1,y+(int)v.size()-num);
        //cout<<zz+yy<<endl;
        ans=max(zz+yy,ans);
        num++;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}
