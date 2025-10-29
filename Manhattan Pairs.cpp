//
// Created by k0itoYuu on 2025/7/20.
//
#include<bits/stdc++.h>
using namespace std;

struct pp{
    int x,y,id;
};
int brr[200005];
pp arr[200005];
bool cmpx(pp a,pp b){
    return a.x<b.x;
}
bool cmpy(pp a,pp b){
    return a.y<b.y;
}
bool cmpyy(pp a,pp b){
    return a.y>b.y;
}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i].x>>arr[i].y;
        arr[i].id=i;
    }
    sort(arr+1,arr+n+1,cmpx);
    sort(arr+1,arr+1+n/2,cmpy);
    sort(arr+1+n/2,arr+n+1,cmpyy);
    //for(int i=1;i<=n;i++)cout<<arr[i].y<<" ";
    cout<<endl;
    for(int i=1;i<=n/2;i++){
        //cout<<i<<" "<<n+1-i<<endl;
        cout<<arr[i].id<<" "<<arr[i+n/2].id<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
//7 8 10 3 4 1 6 9 2 5