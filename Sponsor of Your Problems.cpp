//
// Created by k0itoYuu on 2025/7/27.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i])ans+=2;
        else if(b[i]-a[i]==1){
            ans++;
            i++;
            while(a[i]=='9'&&b[i]=='0'){
                i++;
                ans++;
            }
            break;
        }else break;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}