//
// Created by k0itoYuu on 2025/8/2.
//
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
pp arr[100005];
bool cmp(pp a,pp b){
    return a.first<b.first;
}
void solve(){
    int n,m;

    cin>>n>>m; vector<int>vis(2*n+5);
    string ans=" ";
    for(int i=1;i<=n;i++){
        ans+='(';
    }
    for(int i=1;i<=n;i++){
        ans+=')';
    }
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        arr[i]={l,r};
    }
    sort(arr,arr+m,cmp);

    set<int>s;
//    while(arr[now].first<=n){
//        //cout<<arr[now].first<<" "<<arr[now].second<<endl;
//        auto it=s.lower_bound(arr[now].first);
//        if(it!=s.end()&&*it>=arr[now].first&&*it<=arr[now].second){
//            now++;
//            continue;
//        }
//        s.insert(arr[now].first);
//        vis[arr[now].first]++;
//        now++;
//        if(now>m)break;
//    }
    int end=n;
    //cout<<now<<endl;
    //cout<<ans<<endl;

    for(int now=m-1;now>=0;now--){
//        if(arr[now].first==2*n){
//            cout<<-1<<endl;
//            return;
//        }
        //cout<<now<<endl;
        auto it=s.lower_bound(arr[now].first);
        //cout<<arr[now].first<<" "<<arr[now].second<<endl;
        if(it!=s.end()&&*it>=arr[now].first&&*it<=arr[now].second){
            continue;
        }
        s.insert(arr[now].first);
        //cout<<2*n-arr[now].first+1<<" "<<s.size()*2<<endl;
        if((2*n-arr[now].first+1)<s.size()*2){
            cout<<-1<<endl;
            return;
        }

//        while(vis[end]&&end>0)end--;
        vis[arr[now].first]=1;

    }
    int st=s.size();
    for(int i=1;i<=2*n;i++){
        if(st>=n)break;
        if(vis[i]==1)continue;
        else {
            vis[i]=1;
            st++;
        }
    }
    for(int i=1;i<=n*2;i++){
        if(vis[i]==1)cout<<"(";
        else cout<<")";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}