//
// Created by k0itoYuu on 2025/5/17.
//
#include<bits/stdc++.h>
using namespace std;

int arr[105];
int z[105];
int y[105];
bool cmp(int a,int b){
    return arr[a]>arr[b];
}
void solve(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];

        z[i]=i;
    }
    sort(z,z+n,cmp);
    y[z[0]]=2;
    int f=0;
    for (int i=1;i<n;i++){
        if (arr[i]!=arr[i-1])f=1;
    }
    if (!f){
        cout<<"NO\n";
        return;
    }else cout<<"YES\n";
    for (int i=1;i<n;i++){
        y[z[i]]=1;
    }
    for (int i=0;i<n;i++)cout<<y[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)solve();
}