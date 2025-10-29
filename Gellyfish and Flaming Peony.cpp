//
// Created by k0itoYuu on 2025/6/23.
//
#include<bits/stdc++.h>
using namespace std;
int arr[5005][5005];
int brr[5005];
void solve(){
    int n;
    cin>>n;
    int q;

    int m=-1;
    int g=-1;
    for (int i=0;i<n;i++){
        cin>>brr[i];
        m=max(m,brr[i]);
        if (g==-1)g=brr[i];
        else g=__gcd(g,brr[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=g;j<=m ;j++){
            arr[i][j]=INT_MAX;
        }
    }
    arr[0][brr[0]]=0;set<int>s;
    s.clear();
    s.insert(brr[0]);
    for (int i=1;i<n;i++){
        //cout<<s.size()<<endl;
        arr[i][brr[i]]=0;
        s.insert(brr[i]);
        if (brr[i]==g){
            arr[n-1][brr[i]]=0;
            break;
        }
        for (auto j:s){
            if (arr[i-1][j]!=INT_MAX){
                int e=__gcd(j,brr[i]);
                arr[i][e]=min(arr[i][e],arr[i-1][j]+1);
                arr[i][j]=min(arr[i][j],arr[i-1][j]);
                s.insert(e);
            }
        }
    }
    //cout<<g<<" "<<arr[n-1][g];
    int ans=n-1+arr[n-1][g];
    int f=0;
    for (int i=0;i<n;i++){
        if (brr[i]==g){
            ans--;
            f=1;
        }
    }
    cout<<ans+f<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}