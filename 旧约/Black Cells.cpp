#include<bits/stdc++.h>
using namespace std;
long long arr[2005];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	long long ans;
	if(n%2==0){
		ans=0;
		for(int i=1;i<=n;i+=2){
			ans=max(ans,arr[i+1]-arr[i]);
		}
		cout<<ans<<'\n';
	}else{
		ans=LONG_LONG_MAX;
		for(int i=1;i<=n;i+=2){
			long long m=0;
			
			for(int j=1;j<i;j+=2)m=max(m,arr[j+1]-arr[j]);
			for(int j=i+1;j<=n;j+=2)m=max(m,arr[j+1]-arr[j]);
			ans=min(m,ans);
		}
		cout<<max(1ll,ans)<<'\n';
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
