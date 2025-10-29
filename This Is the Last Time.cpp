//
// Created by k0itoYuu on 2025/7/17.
//
#include<bits/stdc++.h>
using namespace std;
struct d{
    int a,b,c;
};
d arr[100005];
bool cmp(d a,d b){
    if(a.b!=b.b)return a.b<b.b;
    else if(a.a!=b.a)return a.a<b.a;
    else return a.c<b.c;
}
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arr[i]={a,c,b};
    }
    sort(arr,arr+n,cmp);
    int ans=k;
    map<int,int>m;
    for(int i=0;i<n;i++){
        //cout<<arr[i].a<<" "<<arr[i].b<<" "<<arr[i].c<<endl;
        if(k>=arr[i].a&&k<=arr[i].c&&k<arr[i].b)k=arr[i].b;
    }
    cout<<k<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}