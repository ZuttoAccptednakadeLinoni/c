//
// Created by k0itoYuu on 2025/7/2.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int qj[200005];
int cf[200005];
void solve(){
    int n;
    cin>>n;
    int ss=0;
    for(int i=0;i<=n;i++)arr[i]=0;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr[q]++;
        cf[i]=0;
    }
    qj[0]=arr[0];
    //cout<<qj[0]<<" ";
    int f=1;
    if(arr[0]==0){
        f=0;
    }else ss=arr[0]-1;
    for(int i=1;i<=n;i++){
        qj[i]=qj[i-1]+arr[i];
        if(arr[i]==0)f=0;
        ss+=arr[i]-f;
        //cout<<qj[i]<<" ";
    }int i;
    //cout<<endl;
    for(i=0;i<=n;i++){

        //cout<<"arr[i]"<<arr[i]<<endl;
        if(arr[i]==0)break;
        else{

            //cout<<arr[i]<<" "<<max((qj[n]-qj[i])+arr[i]+1,(qj[n]-qj[i])+(qj[i]-arr[i]-i+1+arr[i]))<<endl;
            cf[arr[i]]++;
            cf[max((qj[n]-qj[i])+arr[i]+1,(qj[n]-qj[i])+(qj[i]-arr[i]-i+1+arr[i]))]--;

        }
    }
    //cout<<"ss"<<ss<<endl;
    int sum=0;
        cf[0]++;
        cf[ss+1]--;
    for(int j=0;j<n;j++){
        sum+=cf[j];

        cout<<sum<<" ";
    }
    cout<<1;
    cout<<endl;
//    i++;
//    for(i;i<=n;i++){
//        cout<<1<<" ";
//    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}