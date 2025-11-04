//
// Created by k0itoYuu on 2025/5/17.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    if (n==m)cout<<"NO\n";
    else{
        if (n-m+1>m*25)cout<<"NO";
        else{
            string s;
            for (int i=0;i<=m;i++){
                s+='a';
            }
            for (int i=1;i<26;i++){
                for (int j=0;j<m;j++){
                    if (s.size()>=n){
                        cout<<s<<endl;
                        return ;
                    }
                    s+=(char)('a'+i);
                }
            }
            cout<<s<<endl;
        }

    }
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}