//
// Created by k0itoYuu on 2025/5/15.
//
#include<bits/stdc++.h>
using namespace std;

int ne[200005];
int nee[200005];
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    s='#'+s;
    map<char,int>m;
    for (int i=n;i>=1;i--){
        if (m[s[i]]==0)ne[i]=-1;
        else ne[i]=m[s[i]]-i;
        m[s[i]]=i;
    }
    map<char,int>mm;
    for (int i=1;i<=n;i++){
        //cout<<mm[s[i]]<<" ";
        if (mm[s[i]]==0)nee[i]=-1;
        else nee[i]=i-mm[s[i]];
        mm[s[i]]=i;
        //cout<<mm[s[i]]<<" ";
    }
    int ans=0;
    //for (int i=1;i<=n;i++)cout<<nee[i]<<" ";
    //cout<<endl;
    for (int i=2;i<n;i++){
        if (ne[i]==-1)continue;
        int j=i+1;
        while (ne[j]==ne[i])j++;
        ans=max(j-1,ans);
        i=j-1;
        //cout<<ans<<endl;
    }
    for (int i=n-1;i>1;i--){
        if (nee[i]==-1)continue;
        int j=i-1;
        while (nee[j]==nee[i])j--;
        //cout<<n-j-i;
        ans=max(n-j,ans);
        i=j+1;
    }
    cout<<ans<<endl;
}