#include<bits/stdc++.h>
using namespace std;
long long arr[200005],b[200005];
void solve(){
	long long n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	sort(arr+1,arr+n+1);
	long long h=0;
	long long ans=0;
	for(int i=1;i<=n;i++){
		if(arr[i]==h){
			ans++;
			continue;
		}
		if(k>(arr[i]-h)*(n-i+1)){
			k-=(arr[i]-h)*(n-i+1);
			ans+=(arr[i]-h)*(n-i+1)+1;
			h=arr[i];
		}
		else {
			ans+=k;
			cout<<ans<<endl;;
			return;
		}
	} 
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
