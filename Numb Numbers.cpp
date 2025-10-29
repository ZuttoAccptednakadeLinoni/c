
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int arr[200005];
int brr[200005];
void solve(){
    int n,q;
    cin >> n>>q;
    int ans = 0;
    map<int,int>s;
    map<int,int>b;
    int ss=0,bs=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        arr[i]=x;
        brr[i]=x;

    }
    sort(brr+1,brr+n+1);
    for(int i=1;i<=(n+1)/2;i++){
        s[brr[i]]++;
    }
    for(int i=(n+1)/2+1;i<=n;i++){
        b[brr[i]]++;
    }
//    for(auto i:s)cout<<i.first<<" "<<i.second<<"|";
//    cout<<endl;
//    for(auto i:b)cout<<i.first<<" "<<i.second<<"|";

    for (int i = 1; i <= q; i++)
    {
        int p,v;
        cin>>p>>v;
        if(arr[p]<b.begin()->first){
//            cout<<b.begin()->first<<endl;
            if(arr[p]+v>b.begin()->first){
                s[arr[p]]--;
                s[b.begin()->first]++;
                b[arr[p]+v]++;
                if(s[arr[p]]==0)s.erase(arr[p]);
                if(b.begin()->second==1)b.erase(b.begin());
                else b.begin()->second--;
            }else{
                s[arr[p]]--;
                s[arr[p]+v]++;
                if(s[arr[p]]==0)s.erase(arr[p]);
            }
        }else{
            auto it=b.find(arr[p]);
            if(it->second==1)b.erase(it);
            else it->second--;
            b[arr[p]+v]++;
        }
        arr[p]+=v;
//        for(auto i:s)cout<<i.first<<" "<<i.second<<"|";
//        cout<<endl;
//        for(auto i:b)cout<<i.first<<" "<<i.second<<"|";
//        cout<<endl;
        int w=b.begin()->first;
        auto it=s.find(w);
        if(it!=s.end())cout<<(n+1)/2-it->second<<endl;
        else cout<<(n+1)/2<<endl;
    }
}

signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
/*
1
4 2
4 5 2 3
4 1
4 3
 * */