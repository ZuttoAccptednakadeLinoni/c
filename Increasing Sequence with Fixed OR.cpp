#include<bits/stdc++.h>
using namespace std;
int arr[100];
int a[100];
void solve(){
	long long int n;
	cin>>n;int i=0,ans=0;
	while(n>=(1ll<<i)){
		if((n>>i)&1)ans++;
		i++;
	}
	if(ans==1){
		cout<<1<<endl;
		cout<<n<<endl;
		return;
	}
	cout<<ans+1<<endl;
	for(int j=i;j>=0;j--){
		if((n>>j)&1){
			cout<<n-(1ll<<j)<<" ";
		}
	}
	cout<<n<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
