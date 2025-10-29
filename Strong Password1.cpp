//
// Created by k0itoYuu on 2025/6/16.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    vector<int>v[10];
    for (int i=0;i<10;i++)v[i].clear();
    for (int i=0;i<s.size();i++){
        v[s[i]-'0'].push_back(i);
    }
    int m;
    cin>>m;
    string ss,xx;
    cin>>ss>>xx;
    //cout<<ss<<endl<<xx<<endl;
    int now=-1;
    // for (int i=0;i<10;i++){
    //     for (auto a:v[i])cout<<a<<" ";
    //     //cout<<endl;
    // }
    for (int i=0;i<m;i++){
        int mm=100005;
        //cout<<"now"<<now<<endl;
        for (int j=ss[i]-'0';j<=xx[i]-'0';j++){
            //cout<<"j"<<j<<"!\n";
            int r=0,l=v[j].size();
            //cout<<r<<l<<endl;
            int nm=-1;
            if (v[j].empty()){
                cout<<"YES\n";
                return;
            }
            while (r<=l){
                int mmm=(r+l)/2;
                //cout<<v[j][mmm]<<endl;
                if (v[j][mmm]>now){
                    r=mmm+1;
                    nm=v[j][mmm];
                }else l=mmm-1;
            }
            //cout<<"nm"<<nm<<" "<<v[j][v[j].size()-1]<<endl;
            if (nm>v[j][v[j].size()-1]){
                cout<<"YES\n";
                return;
            }
            mm=max(mm,nm);
        }
        //cout<<mm<<" "<<now<<endl;
        if (mm<now){
            cout<<"YES\n";
            return;
        }
        now=mm;
        //cout<<now<<"now<<endl\n";
    }
    cout<<"NO\n";

}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}


/*
10000
100110100000101111011100110100110011/1
6
000000
110100
0111110010000111100101/2
10
0010100000
1110111100/3
010000110111010
5
11000
11001
111100001010111001000
7
0000000
0111111
11111
1
0
0
 */