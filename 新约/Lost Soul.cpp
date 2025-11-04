//
// Created by k0itoYuu on 2025/6/27.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int brr[200005];
int vis[200005];

void solve(){
    int n;
    cin>>n;
    map<int ,int >ms;
    map<int ,int>mx;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        vis[i]=0;
    }
    for (int i=1;i<=n;i++){
        cin>>brr[i];
    }
    arr[n+1]=-1;
    brr[n+1]=-1;
    for(int i=n;i>0;i--){
        if(arr[i]==brr[i]||arr[i]==arr[i+1]||brr[i]==brr[i+1]||vis[arr[i]]||vis[brr[i]]){
            cout<<i<<endl;
            return;
        }
        vis[arr[i+1]]++;
        vis[brr[i+1]]++;
    }
    cout<<0<<endl;

}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}