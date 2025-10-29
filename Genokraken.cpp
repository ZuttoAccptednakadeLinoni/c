//
// Created by k0itoYuu on 2025/7/21.
//
#include<bits/stdc++.h>
using namespace std;
int ans[10005];
int nxt[10005];
int sum=0;
int ask(int x,int y){

    cout<<"? "<<x<<" "<<y<<endl;
    int c; cin>>c;
    //assert(c!=-1);
    return c;
}
void solve(){
    int n;
    cin>>n;
    ans[1]=0;

    nxt[1]=1;

    for(int i=2;i<n;i++){
        cout<<"? "<<1<<" "<<i<<endl;
        int c;
        cin>>c;
        if(c==0){
            nxt[1]=i;
            sum=i-1;
            ans[i]=1;
            break;
        }else{
            nxt[i]=i;
        }
    }for(int i=1;i<=sum;i++)ans[i]=0;

    int now=2;
    //for(int i=1;i<=sum;i++)cout<<nxt[i]<<" ";
    cout<<endl;
    for(int i=sum+2;i<n;i++){
        while(ask(now,i)==1) {
            now++;
        }
        ans[i]=now;
        now++;
    }
    cout<<"! ";
    for(int i=1;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}