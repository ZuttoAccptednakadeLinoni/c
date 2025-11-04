//
// Created by k0itoYuu on 2025/5/12.
//
#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,t;
    cin>>n>>t;
    int m=-1;
    int q;
    //cout<<"!"<<endl;
    for (int i=0;i<n;i++){
        cin>>q;
    //    cout<<q<<endl;
        if (q>m)m=q;
    }
    cout<<max(m/t+(m%t>0),2)<<endl;
}
