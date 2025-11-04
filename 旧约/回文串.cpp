#include<bits/stdc++.h>
using namespace std;
bool f(const string &s){
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-i-1]){
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 1;
}
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]-('A'-'a');
	}
	f(s);
}
