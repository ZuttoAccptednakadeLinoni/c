#include<bits/stdc++.h>
using namespace std;

int arr[105];

void solve(){
	int n,q;
	cin>>n;
	for(int i=0;i<=n;i++){
		arr[i]=0;
	}
	for(int i=0;i<n;i++){
		cin>>q;
		arr[q]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		ans=max(ans,arr[i]);
	}
	cout<<n-ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
