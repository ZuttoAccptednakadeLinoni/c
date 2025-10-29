#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int f=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==s[i+1])f=1;
	}
	if(f)cout<<1<<endl;
	else cout<<s.size()<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
