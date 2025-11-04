//
// Created by k0itoYuu on 2025/8/3.
//
#include <bits/stdc++.h>
using namespace std;
int arr[6006];
void solve(){
    int n, ans = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        int l = 0, r = 0;
        for(int j=0; j<i; j++) if(arr[j] > arr[i]) l++;
        for(int j=i+1; j<n; j++) if(arr[j] > arr[i]) r++;
        ans +=min(l, r);
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}
