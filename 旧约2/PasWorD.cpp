//
// Created by k0itoYuu on 2025/5/12.
//
#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    string s;
    cin>>s;
    int ans=1;
    for (int i=0;i<n;i++){
        if (s[i]=='?')ans*=(26+26+10);
        if (s[i]>='a'&&s[i]<='z')ans*=2;
    }

}