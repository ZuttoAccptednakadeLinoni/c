#include<bits/stdc++.h>
using namespace std;
char a[50],b[50];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
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
