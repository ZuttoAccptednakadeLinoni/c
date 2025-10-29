#include<bits/stdc++.h>
using namespace std;
int a[100005],Min=INT_MAX,b[100005];
void solve(){
	int n,ans=0,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	cin>>q;
	for(int i=0;i<n;i++){
		Min=min(abs(q-a[i]),Min);
		Min=min(abs(q-b[i]),Min);
	}
	ans+=Min+1;
	for(int i=0;i<n;i++){
		ans+=abs(a[i]-b[i]);
	}
	cout<<ans<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
