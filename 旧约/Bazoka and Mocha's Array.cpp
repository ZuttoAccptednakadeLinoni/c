#include<bits/stdc++.h>
using namespace std;
int a[1000005];
void solve(){
	int n,f=0,q=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]&&f==0)f=1;
		else if (a[i]<a[i-1]&&f==1){
			q=1;
		}
	}
	if(q==1){
		cout<<"No\n";
		return;
	}
		if(f==0)cout<<"Yes\n";
		else if(a[n-1]<=a[0]&&f==1){
			cout<<"Yes\n";
		}else cout<<"No\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
