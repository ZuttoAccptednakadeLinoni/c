#include<bits/stdc++.h>
using namespace std;
int arr[100005];
 
void solve(){
    int n;
    cin>>n;
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>m;
    m[0]++;

    for(int i=0;i<n-1;i++){
        m[arr[i]]++;
        m[arr[i+1]]++;
        m[(arr[i]|arr[i+1])^(arr[i]|arr[i+1])]++;
        m[arr[i]&arr[i+1]]++;
        m[arr[i]&(arr[i]^arr[i+1])];
        m[arr[i+1]&(arr[i]^arr[i+1])];
        m[arr[i]^arr[i+1]];
        m[arr[i]|arr[i+1]];


    }
    
    cout<<m.size();
}
 
int main(){
    int t=1;
 
    while(t--)solve();
}
