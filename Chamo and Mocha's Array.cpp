#include<bits/stdc++.h>
using namespace std;
int a[100005];
void solve(){
	int n,ans=0,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==2){
		cout<<min(a[0],a[1])<<endl;
		return;
	}
	for(int i=0;i<n-2;i++){
		vector<int> q;
		for(int k=0;k<3;k++)q.push_back(a[i+k]);
		sort(q.begin(),q.end());
		ans=max(ans,q[1]);
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
