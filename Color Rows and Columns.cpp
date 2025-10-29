//
// Created by k0itoYuu on 2025/9/3.
//
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
pp arr[200005];
bool cmp(pp a,pp b){
    return (a.first+a.second)*(b.first*b.second)>(b.first+b.second)*(a.first*a.second);
}
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n,cmp);
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        //cout<<sum+arr[i].first+arr[i].second<<endl;
        if(sum+arr[i].first+arr[i].second<k){
            ans+=arr[i].first*arr[i].second;
            sum+=arr[i].first+arr[i].second;
        }
        else{
            while(sum<k&&(arr[i].first>=0||arr[i].second>=0)){
                ans+=min(arr[i].first,arr[i].second);
                if(arr[i].first>=arr[i].second)arr[i].first--;
                else arr[i].second--;
                sum++;
            }
            break;
        }
    }
    if(sum>=k)cout<<ans<<endl;
    else cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}