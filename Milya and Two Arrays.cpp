#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	map<int ,int >y;
	map<int ,int >r;
	int q;
	for(int i=0;i<n;i++){
		cin>>q;
		y[q]++;
	}
	for(int i=0;i<n;i++){
		cin>>q;
		r[q]++;
	}
	int a=(int)y.size()+(int)r.size();
	if(a>=4)cout<<"yes\n";
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
