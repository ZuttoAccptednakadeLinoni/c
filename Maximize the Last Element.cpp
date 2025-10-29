#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,w;
	cin>>n;
	vector<int>v;
	for(int i=1;i<=n;i++){
		cin>>w;
		if(i%2==1)v.push_back(w);
	}
	sort(v.begin(),v.end());
	cout<<v[v.size()-1]<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
