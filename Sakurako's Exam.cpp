#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	cin>>a>>b;
	b=b%2;
	a=a-b*2;
	if(a%2==0&&a>=0)cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
