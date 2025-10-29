#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int num=1;
	int n=s.size();
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1])num++;
		else break;
	}
	int nb=0;
	for(int i=0;i<n/2;i++){
		if(s[i]==s[n-1-i])nb++;
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
