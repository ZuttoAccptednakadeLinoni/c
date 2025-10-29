//
// Created by k0itoYuu on 2025/5/17.
//
#include<bits/stdc++.h>
using namespace std;

string s[100005];
bool cmp(string a,string b){
    return a<b;
}
int main(){
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        cin>>s[i];
    }

    for (int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        int ans=0;
        sort(s+a,s+b+1,cmp);
        string ss;
        for (int i=a;i<=b;i++){
            int q=0;
            cout<<ss<<"!!!"<<s[i]<<endl;
            for (int j=0;j<min(ss.size(),s[i].size());j++){
                if (ss[j]!=s[i][j])break;
                q++;
            }
            ans+=ss.size()-q;
            ss=s[i];
            cout<<ans<<endl;
            ans+=s[i].size()-q;
            cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}