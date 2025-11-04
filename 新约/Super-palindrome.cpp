//
// Created by k0itoYuu on 2025/6/30.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
typedef unsigned long long ULL;
const int N = 1000010, P = 131;
int n, m;
char sss[N];


void solve(){
    string s;
    cin>>s;
    set<int>se[26];
    int n=s.size();
    s=" "+s;
    int end=0;
    int ans=0;int ne=0;
    for(int i=1;i<=n;i++){
        se[s[i]-'a'].insert(i);
    }
    int lst=0;
    for(int i=1;i<=n;i++){
        string q,h;
        int ff=0;
        //cout<<"i"<<i<<endl;
        int j=i;
        int k=i+1;
        int f=k;
        string qq,hh;
        while(j>0&&k<=n){
            //cout<<i<<s[j]<<f<<endl;
            //cout<<"j"<<j<<endl;

            auto it=se[s[j]-'a'].lower_bound(f);
            if(it==se[s[j]-'a'].end())break;
            int ww=*it;
            //cout<<"ww"<<ww<<endl;

            if(i-(ww-i)+1<=0)break;

            //cout<<"jjj"<<j<<endl;


            for(int ee=k;ee<=ww;ee++){
                //cout<<ee<<" "<<i-(ee-i)+1<<endl;
                q=q+s[ee],h=s[i-(ee-i)+1]+h;

            }

            //cout<<j<<" "<<i+1+(i-j)<<" "<<endl;
            //cout<<s[j]<<" "<<s[i+1+(i-j)]<<endl;
            //cout<<q<<"||"<<h<<endl;
            if(q==h){
                //cout<<ww<<endl;
                //cout<<q<<"||"<<h<<endl;
                ff=1;
                ans++;
                j=i-(ww-i);
                k=i+(ww-i)+1;
                f=k;
            }else f=ww+1;

            q="";
            h="";
            //cout<<j<<" "<<k<<endl;
            //cout<<"kk"<<k<<endl;
            //cout<<j<<"ans"<<ans<<endl;
        }

        //cout<<"end"<<end<<endl;
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
4
pbbp
ppp
pbbpbb
pbpbpbpb
pppp
*/