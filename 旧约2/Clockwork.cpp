#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int min=INT_MAX,q=0;
	int f=1;
	for(int i=1;i<=n;i++){
		cin>>q;
		if(q<=2*max(i-1,n-i))f=0;
		
	}
	if(f)cout<<"yes\n";
	else cout<<"no\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
