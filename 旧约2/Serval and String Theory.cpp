#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	if(n==1){
		cout<<"NO\n";
		return;
	}
	if(t==0){
		for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-1-i]){
		if(s[i]<s[s.size()-1-i])cout<<"YES\n";
		else cout<<"NO\n";
		return;
			}
			
		}
		cout<<"NO\n";
		return;	
	}
	for(int i=1;i<s.size();i++){
		if(s[i]!=s[i-1]){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
