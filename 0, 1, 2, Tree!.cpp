//
// Created by k0itoYuu on 2025/7/26.
//
#include<bits/stdc++.h>
using namespace std;
int arr[40];

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int i=1;
    //cout<<a*2+b*1<<" "<<a+b+c-1<<endl;
    if(a*2+b*1!=a+b+c-1){
        cout<<-1<<endl;
        return;
    }
    //else cout<<"QQ"<<endl;
    if(a==0){
        cout<<b+c-1<<endl;
        return;
    }
    while(a>arr[i]){
        //cout<<arr[i]<<" ";

        a-=arr[i];
        i++;
    }
    //cout<<endl;
    int ans=i;
    cout<<ans<<endl;
    //cout<<arr[i]+a<<endl;
    if(c!=arr[i]+a)cout<<"-1"<<endl;
    else {
        if(b>=arr[i+1]-a)b-=arr[i+1]-a;//if(b>0)ans++;
        cout<<ans<<endl;
        //cout<<"b"<<b<<endl;
        if(b>0)ans+=b/(arr[i+1]+a)+(b%(arr[i+1]+a)>0);
        cout<<"an"<<ans<<endl;
        ans++;
        cout<<ans-1<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=30;i++)arr[i]=(1<<(i-1));
    while(t--)solve();
}