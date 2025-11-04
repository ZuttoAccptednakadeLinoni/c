#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int ans=n/(a+b+c);
	ans*=3;
	int q=n%(a+b+c);
	if(q==0)cout<<ans<<endl;
	else if(q<=a)cout<<ans+1<<endl;
	else if(q<=a+b)cout<<ans+2<<endl;
	else cout<<ans+3<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
