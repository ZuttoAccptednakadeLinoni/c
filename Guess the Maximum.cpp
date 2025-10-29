#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m=INT_MAX;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n-1;i++){
		m=min(m,max(v[i],v[i+1]));
	}
	cout<<m-1<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
