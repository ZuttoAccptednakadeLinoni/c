#include<bits/stdc++.h>
using namespace std;
int arr[100005];
void solve(){
	int n,a,b;
	cin>>n>>a>>b;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int ans=0;
	for(int i=0;i<b-a+1;i++){
		ans+=arr[i];
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
