#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int sum=arr[n-1],ans=INT_MAX;
	if(sum>=k){
		cout<<0<<endl;
		return;
	}
	for(int i=n-2;i>=0;i--){
		ans=min(k-sum,ans);
		sum+=arr[i];
		if(sum>=k)break;
		
	}
	if(sum<k)ans=min(k-sum,ans);
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
