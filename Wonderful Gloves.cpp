#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	int q,sum=0,su=0;
	for(int i=0;i<n;i++){
		cin>>q;
		sum+=q;
	}
	for(int i=0;i<n;i++){
		cin>>q;
		su+=q;
	}
	int ans=max(sum,su)+k;
	cout<<ans<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
