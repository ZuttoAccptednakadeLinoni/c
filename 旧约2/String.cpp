#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1')ans++;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
