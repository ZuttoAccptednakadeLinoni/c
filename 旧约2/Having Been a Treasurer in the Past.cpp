#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	long long q=0,w=0;
	for(int i=0;i<n;i++){
		if(s[i]=='_')q++;
		else w++;
	}
	long long ans=w/2*(w-w/2)*q;
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
