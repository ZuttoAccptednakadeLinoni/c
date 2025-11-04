//
// Created by k0itoYuu on 2025/9/3.
//
#include<bits/stdc++.h>
using namespace std;
int arr[2005];
#define pp pair<int,int>
void solve(){
    int n;
    cin>>n;
    multiset<int>s;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<pp>ans;
    vector<vector<int>>v(n);
    for(int i=n-1;i>0;i--){
        for(int j=0;j<=i;j++)v[j].clear();
//        for(int j=1;j<=n;j++)cout<<arr[j]<<" ";
        cout<<endl;
        for(int j=1;j<=n;j++){
            if(arr[j]==0)continue;
            v[arr[j]%i].push_back(j);
            if(v[arr[j]%i].size()>1){
                ans.push_back({v[arr[j]%i][1],v[arr[j]%i][0]});
                arr[j]=0;
                break;
            }
        }
    }
    cout<<"Yes\n";
    //cout<<ans.size()<<endl;
    for(auto i=ans.rbegin();i<ans.rend();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();

}