#include<bits/stdc++.h>
using namespace std;
pair<int,int>arr[100005];
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.first+a.second<b.first+b.second;
}
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i].first>>arr[i].second;
	}
	sort(arr,arr+n,cmp);
	for(int i=0;i<n;i++){
		cout<<arr[i].first<<" "<<arr[i].second<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
