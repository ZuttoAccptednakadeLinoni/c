//
// Created by k0itoYuu on 2025/5/24.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
    int n,k;
    cin>>n>>k;
    int num=1;
    for (int i=0;i<=n;i++)arr[i]=0;
    int f=0;
    int bi=1,ed=n;
    for (int i=1;i<=n;i++){
        if (arr[i]==0){
            int j=i;
            if (f==0){
                while (j<=n){
                    arr[j]=bi;
                    bi++;
                    j+=k;
                }
                f=1;
            }else{
                f=0;
                while (j<=n){
                    arr[j]=ed;
                    ed--;
                    j+=k;
                }
            }
        }
    }
    for (int i=1;i<=n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while (t--)solve();
}