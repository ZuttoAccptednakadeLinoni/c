//
// Created by k0itoYuu on 2025/7/23.
//
#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
int arr[200005];
void solve(){
    int n;
    cin>>n;

    priority_queue<int>o;
    priority_queue<int>l;
    priority_queue<int,vector<int>,greater<int>>r;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==0)o.push(i);
        else if(arr[i]==1)l.push(i);
        else r.push(i);
    }
    int now=1;
    vector<pp>ans;
    int x=o.size();
    //cout<<x<<endl;
    while(!o.empty()&&o.top()<=x)o.pop();
    //cout<<o.size()<<endl;
    for(int i=1;i<=x;i++){
        //cout<<i<<endl;
        if(o.empty())break;
        if(arr[i]==1){
            int s=o.top();
            o.pop();
            l.pop();
            ans.push_back({i,s});
            swap(arr[i],arr[s]);
            l.push(s);
        }
        else if(arr[i]==0){
            //cout<<o.top()<<"oo"<<endl;
            continue;
//            if(i!=now){
//                ans.push_back({i,now});
//                swap(arr[i],arr[now]);
//            }
//            now++;
        }else if(arr[i]==2){
            //cout<<o.top()<<"o"<<endl;
            int s=l.top();
            l.pop();
            ans.push_back({i,s});
            swap(arr[i],arr[s]);
            s=o.top();
            o.pop();
            ans.push_back({i,s});
            swap(arr[i],arr[s]);
            l.push(s);
        }
    }
    //cout<<ans.size()<<endl;
    //cout<<1<<endl;
    now=n;
    int i=1,j=n;
    while(i<j){
        if(arr[i]==2){
            while(arr[j]!=1)j--;
            if(j<i)break;
            swap(arr[i],arr[j]);
            ans.push_back({i,j});
        }i++;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i.first<<" "<<i.second<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}