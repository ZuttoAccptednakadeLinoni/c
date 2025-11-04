#include<bits/stdc++.h>
using namespace std;
int a[100005];
void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int p=(n+1)/2-1;
	int ans=count(a.begin()+p,a.end(),a[p]);
	cout<<ans<<endl;
}
int main(){
	int t,n,ans,q,w;
	cin>>t;
	while(t--){
		solve();
	}
}
