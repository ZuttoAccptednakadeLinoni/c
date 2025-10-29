//
// Created by k0itoYuu on 2025/8/7.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s=to_string(n);
    //cout<<s<<endl;
    if(s[0]=='0')cout<<10<<endl;
    else if(s[0]=='-'&&s[1]=='0')cout<<"-01\n";
    else if(s[0]=='-'){
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'&&s[i]!='1'&&s[i]!='-'){
                //cout<<i<<endl;
                for(int j=0;j<i;j++){
                    cout<<s[j];
                }
                cout<<1;
                for(int j=i;j<s.size();j++)cout<<s[j];cout<<endl;
                return;
            }
        }
        cout<<s<<1<<endl;
    }else{
        //cout<<1<<endl;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!='0'){
                for(int j=0;j<=i;j++){
                    cout<<s[j];
                }
                cout<<1;
                for(int j=i+1;j<s.size();j++)cout<<s[j];cout<<endl;
                return;
            }
        }

    }
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}