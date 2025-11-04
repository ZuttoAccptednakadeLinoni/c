#include<bits/stdc++.h>
using namespace std;

int arr[200005];
int sum[200005];
int ans;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		sum[i]=sum[i-1]+arr[i];
	}
	for(int i=1;i<=n-1;i++){
		ans+=arr[i]*(sum[n]-sum[i]);
	}
	cout<<ans;
} 
