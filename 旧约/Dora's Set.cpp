#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,ans=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(i%2==1)ans++;
	}
	cout<<ans/2<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
