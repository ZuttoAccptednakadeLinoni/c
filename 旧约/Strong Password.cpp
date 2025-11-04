#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1]){
			for(int j=0;j<=i-1;j++){
				cout<<s[j];
			}
			for(int j=0;j<=28;j++){
				if('a'+j!=s[i-1]){
					cout<<(char)('a'+j);
					break;
				}
			}
			for(int j=i;j<s.size();j++){
				cout<<s[j];
			}
			cout<<endl;
			return;
		}
	}
	cout<<s;
	for(int j=0;j<=28;j++){
			if('a'+j!=s[s.size()-1]){
				cout<<(char)('a'+j)<<endl;
				return;
			}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
