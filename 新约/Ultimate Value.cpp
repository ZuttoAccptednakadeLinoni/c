//
// Created by k0itoYuu on 2025/9/16.
//
#include<bits/stdc++.h>
#define int long long
#define pp pair<int,int>
using namespace std;
int arr[200005];
int brr[200005];
int crr[200005];
void solve(){
    int n;
    cin>>n;
    priority_queue<pp,vector<pp>,greater<pp>>q;int sum=0;
    priority_queue<pp>oq;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        crr[i]=arr[i]-i;
        if(i%2==1){
            sum+=arr[i];brr[i]=arr[i]+i;
            q.push({brr[i]+arr[i],i});
        }else{
            sum-=arr[i];
            brr[i]=arr[i]+i;
            oq.push({crr[i]+arr[i],i});
        }
    }
    int ans;
    if(n%2==1)ans=n-1;
    else ans=n-2;
    ans+=sum;
    //cout<<ans<<endl;
    for(int i=(n/2)*2;i>0;i-=2){
        while(!q.empty()&&i<q.top().second){

            //cout<<q.top().second<<" ";
            q.pop();

        }
        if(q.empty())break;
        //cout<<"______\n";
        auto p=q.top();
        //cout<<i<<" "<<p.second<<" "<< brr[i]-brr[p.second]<<endl;
        ans=max(ans,sum+arr[i]+brr[i]-p.first);
    }
    //cout<<"@@@\n";
    int i;
    if(n%2==1)i=n;
    else i=n-1;
    for(i;i>0;i-=2){
        //cout<<i<<endl;
        while(!oq.empty()&&i<oq.top().second){
            //cout<<q.top().second<<" ";
            oq.pop();

        }
        if(oq.empty())break;
        //cout<<"______\n";
        auto p=oq.top();
        //cout<<i<<" "<<p.second<<" "<<-arr[i]+arr[p.second]<<endl;
        ans=max(ans,sum-arr[i]-crr[i]+p.first);
    }
    cout<<ans<<endl;
}


signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}