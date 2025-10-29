#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x;
	cin>>n>>x;
	int sum=0,q;
	for(int i=0;i<n;i++){
		cin>>q;
		sum+=q;
	}
	if(sum==n*x)cout<<"YES\n";
	else cout<<"NO\n";
}


int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
