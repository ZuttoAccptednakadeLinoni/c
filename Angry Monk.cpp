#include<bits/stdc++.h>
using namespace std;
int arr[100005];
void solve(){
	int n,k,q=0;
	int ans=0;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		cin>>arr[i];
	}
	sort(arr,arr+k);
	for(int i=0;i<k-1;i++){
		if(arr[i]==1)ans++;
		else ans+=arr[i]+arr[i]-1;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
