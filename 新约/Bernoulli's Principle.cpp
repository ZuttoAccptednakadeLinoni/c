//
// Created by k0itoYuu on 2025/8/7.
//
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int brr[100005];int n,x;
bool cmp(int a,int b){
    int q=arr[a],w=arr[b];
    return abs(q*2-x)>abs(w*2-x);
}
void solve(){

    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i]=i;
    }
    sort(brr,brr+n,cmp);
    for(int i=0;i<n;i++){
        cout<<brr[i]+1<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}