#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
void solve(){
	int n;
	cin>>n;
	int m=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%2==1)m=max(m,arr[i]);
	}
	sort(arr,arr+n);
	int ans=m;
	int w=0;
	int f=0;
	if(m==0){
		cout<<arr[n-1]<<endl;
		return;
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2==1)w+=arr[i]-1;
		else {
			f=1;
			ans+=arr[i];
		}
		
	}
	if(f)cout<<ans+w-(m-1)<<endl;
	else cout<<ans<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
