#include<bits/stdc++.h>
using namespace std;



int main(){
	string s;
	cin>>s;
	map<char,int>m;
	for(int i=0;i<26;i++){
		int q;
		cin>>q;
		m['a'+i]=q;
	}
	map<char,int>num;
	int ans=0;
	for(int i=0;i<s.size();i++){
		num[s[i]]++;
		ans+=m[s[i]];
	}
	for(int i=0;i<26;i++){
		cout<<num['a'+i];
		if(i!=25)cout<<" ";
	}
	cout<<endl;
	cout<<ans<<endl;
}
