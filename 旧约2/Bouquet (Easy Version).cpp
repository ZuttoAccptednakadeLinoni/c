#include<bits/stdc++.h>
using namespace std;
long long arr[200005];
void solve(){
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	sort(arr+1,arr+1+n);
	long long ans=0,i=0,j=1,sum=0;
	while(i<n){
		i++;
		sum+=arr[i];
		while(sum>m||arr[i]-arr[j]>1) sum-=arr[j],j++;
		ans=max(ans,sum);
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
