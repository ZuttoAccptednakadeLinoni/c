#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,d,k;
	cin>>n>>d>>k;
	vector<int> s(n+1),e(n+1);
	for(int i=0;i<k;i++){
		int a,b;
		cin>>a>>b;
		s[a]++;
		e[b]++;
	}
	for(int i=0;i<n;i++)s[i+1]+=s[i];
	for(int i=0;i<n;i++)e[i+1]+=e[i];
	int most=0;
	int robert=0;
	int mrs=0;
	int least = 1e9;
	for(int i=d;i<=n;i++){
		int cur=s[i]-e[i-d];
		if(cur>most)most=cur,robert=i-d+1;
		if(cur<least)least=cur,mrs=i-d+1;
	}
	cout<<robert<<" "<<mrs<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
