#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	cin>>a>>b;
	if(a>b){
		cout<<a<<endl;;
		return;
	}
	if(b-a>a)cout<<0<<endl;
	else{
		cout<<2*a-b<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
