#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	if(s.size()<3)cout<<-1<<endl;
	else cout<<s[0]<<s[1]<<s[2]<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
