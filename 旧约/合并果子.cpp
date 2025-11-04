#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void solve()
{
	int n,ans=0;
	vector<int>v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=1;i<n;i++){
		arr[i]+=arr[i-1];
		ans+=arr[i];
		sort(arr+i,arr+n);
	}
	cout<<ans<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
