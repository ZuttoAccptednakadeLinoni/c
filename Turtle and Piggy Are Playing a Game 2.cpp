#include <bits/stdc++.h>
using namespace std;
int arr[100005];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[n/2]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
