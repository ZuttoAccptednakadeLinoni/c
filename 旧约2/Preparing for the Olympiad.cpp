#include<bits/stdc++.h>
using namespace std;
int arr[105];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int q;
	cin>>q;
	int ans=0;
	for(int i=1;i<n;i++){
		cin>>q;
		if(q<arr[i])ans+=arr[i]-q;
	}
	cout<<ans+arr[n]<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
