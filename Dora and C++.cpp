#include<bits/stdc++.h>
using namespace std;

int arr[100005];

void solve(){
	int n,a,b;
	cin>>n>>a>>b;
	int g=__gcd(a,b);
	for(int i=0;i<n;i++){
		cin>>arr[i];
		arr[i]=arr[i]%g;
	}
	sort(arr,arr+n);
	int ans=arr[n-1]-arr[0];
	for(int i=0;i<n-1;i++){
		ans=min(ans,arr[i]+g-arr[i+1]);
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
