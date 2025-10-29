//
// Created by k0itoYuu on 2025/5/22.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>z,y;
    z.push_back(0);
    y.push_back(0);
    for (int i=0;i<n;i++){
        int q;
        cin>>q;
        int f;
        if (z.back()>y.back())f=0;
        else f=1;
        int w=max(z.back(),y.back());
        int e=min(z.back(),y.back());
        if (q>w){
            //cout<<"!"<<1<<endl;
            if (f)z.push_back(q);
            else y.push_back(q);
        }else if (q>e){
            //cout<<"!"<<2<<endl;
            if (!f)z.push_back(q);
            else y.push_back(q);
        }else{
            //cout<<"!"<<3<<endl;
            if (f)z.push_back(q);
            else y.push_back(q);
        }
        //cout<<z.back()<<" "<<y.back()<<endl;
    }
    int ans=0;
    for (int i=1;i<=(int)z.size()-2;i++){
        //cout<<"!"<<endl;
        if (z[i]<z[i+1])ans++;
    }
    //cout<<"%%%"<<y.size()<<endl;
    for (int i=1;i<=(int)y.size()-2;i++){
        //cout<<"@"<<endl;
        //cout<<i<<" "<<y.size()-2<<endl;
        if (y[i]<y[i+1])ans++;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        //cout<<100000-t<<endl;
        solve();
    }
}