#include<bits/stdc++.h>
using namespace std;
long long arr[300005];
void solve(){
	long long n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long j=k;
	long long ans=0;
	long long i=0;
	while(j>0){
		ans+=min((j),m)*(arr[i]+k-j);
		j-=min(j,m);
		i++;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
