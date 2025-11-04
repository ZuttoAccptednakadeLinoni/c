#include<bits/stdc++.h>
using namespace std;
int arr[100005];
void solve(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int g=-1;
	if(k==1){
		int ans=0;
			for(int i=1;i<=n/2;i++){
			if(arr[i]!=arr[n-i+1]){
				ans+=abs(arr[i]-arr[n-i+1])/k;
			}
		cout<<ans/2<<endl;
		}
	}else{
		for(int i=1;i<=n/2;i++){
			if(arr[i]!=arr[n-i+1]){
			if(g==-1)g=abs(arr[i]-arr[n-i+1]);
			else{
				g=__gcd(g,abs(arr[i]-arr[n-i+1]));
			}
		}
		}
		g=__gcd(g,k);
		if(g==-1)cout<<0<<endl;
		else if(g==1)cout<<-1;
		else{
			int ans=0;
			for(int i=1;i<=n/2;i++){
			if(arr[i]!=arr[n-i+1]){
				ans+=abs(arr[i]-arr[n-i+1])/k;
			}
		}
		cout<<ans<<endl;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
