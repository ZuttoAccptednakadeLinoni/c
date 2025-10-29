#include<bits/stdc++.h>
using namespace std;
int a[100006];
void solve(){
	int n,q,w=0x3f,f=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	q=a[0];
	for(int i=1;i<n;i++){
		if(a[i]%q!=0&&a[i]%w!=0&&f==0){
			w=a[i];
			f=1;
		}else if(a[i]%q!=0&&a[i]%w!=0&&f==1){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
	return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
