//
// Created by k0itoYuu on 2025/9/21.
//
//function find(int x):l := 1    r := n    while l <= r:        let m be a random integer between l and r,inclusive        if p[m] == x            return m        if p[m] > x:            r := m - 1        else:            l := m + 1    return undefined     // not found
#include<bits/stdc++.h>
using namespace std;
int qz[200005];
int ans[200005];
char arr[200005];
void solve(){
    int n;
    cin>>n;
    arr[0]='1';
    arr[n+1]='1';
    for(int i=1;i<=n;i++){
        char c;
        cin>>arr[i];

    }
    for(int i=1;i<=n;i++){
        if(arr[i]=='0'&&arr[i-1]=='1'&&arr[i+1]=='1'){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
    stack<int>s;
    for(int i=1;i<=n;i++){
        if(arr[i]=='0'){
            s.push(i);
        }else{
            while(!s.empty()){
                cout<<s.top()<<" ";
                s.pop();
            }
            cout<<i<<" ";
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}