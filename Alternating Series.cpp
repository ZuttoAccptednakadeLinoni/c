//
// Created by k0itoYuu on 2025/8/10.
//
#include<bits/stdc++.h>
using namespace std;
int arr[15];
int brr[15];
void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        for(int i=1;i<n;i++){
            if(i%2==1)cout<<-1<<" ";
            else cout<<3<<" ";
        }
        cout<<2;
    }else{
        for(int i=1;i<=n;i++){
            if(i%2==1)cout<<-1<<" ";
            else cout<<3<<" ";
        }
    }
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--)solve();
}