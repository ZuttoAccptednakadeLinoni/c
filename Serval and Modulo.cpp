//
// Created by k0itoYuu on 2025/5/20.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[10005];
int brr[10005];int n;
bool chack(int i){
    vector<int>v;
    for (int j=0;j<n;j++){
        v.push_back(arr[j]%i);
    }
    sort(v.begin(),v.end());
    for (int j=0;j<n;j++){
        if (v[j]!=brr[j])return 0;
    }
    return 1;
}
void solve(){

    cin>>n;
    int suma=0,sumb=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        suma+=arr[i];
    }
    map<int ,int >m,mm;
    for (int i=0;i<n;i++){
        int q;
        cin>>brr[i];
        sumb+=brr[i];
    }
    sort(brr,brr+n);
    //cout<<suma<<" "<<sumb<<endl;
    if (suma<sumb){
        cout<<-1<<endl;
        return;
    }
    if (suma==sumb){
        if(chack(1000000000))cout<<1000000000<<endl;
        else cout<<-1<<endl;
        return;
    }
    int w=suma-sumb;
    for (int i=1;i*i<=w;i++){
        if (w%i==0){
            if (chack(i)){
                cout<<i<<endl;
                return;
            }
            if (chack(w/i)){
                cout<<w/i<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}