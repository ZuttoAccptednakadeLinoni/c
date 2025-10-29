#include<iostream>
#include<string>
using namespace std;
void solve(){
	string s;
	cin>>s;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]!=s[i+1]){
			cout<<"YES\n";
			if(i==0){
				cout<<s[1]<<s[0]<<s.substr(i+2,s.size())<<"\n";
				return;
			}else{
				cout<<s.substr(0,i)<<s[i+1]<<s[i]<<s.substr(i+2,s.size()-i+2)<<"\n";
				return;
			}
		}
	}
	cout<<"NO\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
