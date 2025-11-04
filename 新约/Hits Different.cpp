//
// Created by k0itoYuu on 2025/6/22.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[1000005];
int brr[1000005];
int find(int q,int i){
    cout<<q<<endl;
    if (arr[q]!=0)return arr[q];
    if (q-i>(1+i-2)*(i-2)/2)find(q-i,i-1)+q*q;
    if (q-i+1<=(1+i-1)*(i-1)/2)find(q-i+1,i-1)+q*q;

    return arr[q];
}
void solve(){
    int n;
    cin>>n;
    cout<<brr[n]<<endl;

}

signed main(){
    int t;
    arr[1]=1;
    int q=2;
    int sum=1;
    brr[1]=1;
    for (int i=2;i<=1000000;i++){
        if ((i-q+1<=(1+q-1)*(q-1)/2)){
            arr[i]=arr[i-q+1]+i*i;

        }
        else{
            arr[i]=i*i;

        }
        if (i-q>(1+q-2)*(q-2)/2){
            brr[i]=brr[i-q]+arr[i];
        }else{
            brr[i]+=arr[i];
        }
        //cout<<brr[i]<<" ";
        if (i==sum+q){
            sum+=q;
            q++;
        }
    }
    cin>>t;
    while (t--)solve();
}