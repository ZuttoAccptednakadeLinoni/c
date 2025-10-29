//
// Created by k0itoYuu on 2025/9/2.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int brr[200005];
bool cmp(int a,int b){
    if(arr[a]==arr[b])return a>b;
    return arr[a]>arr[b];
}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        brr[i]=i;
    }
    int no=n+1;
    arr[n+1]=INT_MAX;
    int ans=0;
    int num=0;
    sort(brr+1,brr+n+1,cmp);
    //for(int i=1;i<=n;i++)cout<<brr[i]<<" ";
    for(int i=1;i<=n;i++){
        if(brr[i]<no&&arr[brr[i]]==arr[brr[i+1]]){
            num++;
            continue;
        }
        if(brr[i]>no)continue;
        no=brr[i];
        num++;
        ans+=no-1;

        cout<<no<<" "<<num<<" "<<ans<<endl;
        num=0;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
4
2
1 2
2
2 2
7
1 1 1 2 2 2 2
3
1 2 3
*/