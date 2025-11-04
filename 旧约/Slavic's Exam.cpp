#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s,t;
	cin>>s>>t;
	int j=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='?'){
			if(j<t.size()){
				s[i]=t[j];
				j++;	
			}else s[i]='a';
		}else if(s[i]==t[j])j++;
	}
	if(j>=t.size())cout<<"YES\n"<<s<<endl;
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
