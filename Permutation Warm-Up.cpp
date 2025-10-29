//
// Created by k0itoYuu on 2025/5/14.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a=n;
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=abs(a-i);
        a--;
    }
    cout<<sum/2+1<<endl;

}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}