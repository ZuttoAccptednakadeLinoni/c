#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sn=0,pn=0,f=0;
	for(int i=0;i<n;i++){
		if(s[i]=='s')sn=i;
		if(s[i]=='p'&&f==0){
			pn=i;f=1;
		}
	}
	if(sn<=pn)cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
