#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s,t;
	cin>>s>>t;
	map<char,int>m;
	for(int i=0;i<t.size()-1;i++){
		m[t[i]]=i+1;
	}
	int ans=-1,sum=INT_MAX;
	for(int i=1;i<s.size();i++){
		if(m[s[i]]&&(m[s[i]]!=t.size())){
			if(i+1+(t.size()-m[s[i]]-1)<sum){
				ans=i;
				sum=i+1+(t.size()-m[s[i]]-1);
			}
		}
	}
	
	if(ans>=0){
		for(int i=0;i<=ans;i++){
			cout<<s[i];
		}

		for(int i=m[s[ans]];i<t.size();i++){
			cout<<t[i];
		}
	}
	else cout<<-1;
	return;
}

int main(){
	solve();
} 
