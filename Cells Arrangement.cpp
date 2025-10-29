#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	if(n==2)cout<<"1 1\n1 2\n";
	else if(n==3)cout<<"2 1\n2 3\n3 1\n";
	else {
		cout<<"1 1\n1 2\n1 4\n";
		for(int i=4;i<=n;i++){
			cout<<i<<" "<<i<<endl;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
