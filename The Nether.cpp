//
// Created by k0itoYuu on 2025/8/26.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
vector<int>v[505];
void solve(){
    int n;
    cin>>n;
    int m=0;
    for(int i=1;i<=n;i++)v[i].clear();
    for(int i=1;i<=n;i++){
        cout<<"? "<<i<<" ";
        cout<<n<<" ";
        for(int j=1;j<=n;j++)cout<<j<<" ";
        cout<<endl;
        int q;
        cin>>q;
        v[q].push_back(i);
        m=max(m,q);
    }
    vector<int>ans;
    ans.push_back(*v[m].begin());
    for(int i=m-1;i>=1;i--){
        int as=*(ans.end()-1);
        for(auto j:v[i]){
            cout<<"? "<<as<<" ";
            cout<<2<<" ";
            cout<<as<<" "<<j<<endl;
            int q;
            cin>>q;
            if(q==2){
                ans.push_back(j);
                break;
            }
        }
    }
    cout<<"! "<<m<<" ";
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}