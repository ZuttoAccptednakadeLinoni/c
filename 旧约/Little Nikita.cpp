#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,q;
	cin>>t;
	while(t--){
		cin>>n>>q;
		if(n<q)cout<<"No\n";
		else if(n==q)cout<<"Yes\n";
		else {
			if((n-q)%2==0)cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
}
