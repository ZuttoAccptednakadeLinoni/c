#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	cin>>a>>b;
	for(int i=0;i<30;i++){
		if((a>>i&1)!=(b>>i&1)){
			cout<<(1<<i)<<'\n';
			return;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
