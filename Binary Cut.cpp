#include<iostream>
#include<string>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int res=1;
	bool ex=0;
	for(int i=0;i<s.size()-1;i++){
		res+=(s[i]!=s[i+1]);
		ex|=(s[i]=='0'&&s[i+1]=='1');
	}
	cout<<res-ex<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
