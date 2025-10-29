//
// Created by k0itoYuu on 2025/5/14.
//
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,x;
    cin>>a>>x;
    int num=0;
    for (int i=0;i<30;i++){
        if (x>>i&1)num++;
    }
    //cout<<num<<endl;
    if (a==1&&x==0){
        cout<<-1<<endl;
        return;
    }
    if (num>=a){
        cout<<x<<endl;
        return;
    }
    int q=a-num;
    int f=x&1;
    if (f){

        if (q%2==1&&q+1==a)cout<<a-num+x-1+4<<endl;
        else cout<<a-num+((a-num)%2)+x<<endl;

    }

    else{
        if (q==a&&a%2==1)cout<<a-num+x-1+4<<endl;
        else cout<<a-num+((a-num)%2)+x<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}