#include<bits/stdc++.h>
using namespace std;

void solve(){
	string x,y;
	int ans=0,q;
	cin>>q;
	cin>>x>>y;
	for(int i=1;i<x.size()-1;i++){
		if(x[i]=='.'){
			if(x[i-1]=='.'&&x[i+1]=='.'&&y[i]=='.'&&y[i-1]=='x'&&y[i+1]=='x'){
				ans++;
			}
		}
		if(y[i]=='.'){
			if(y[i-1]=='.'&&y[i+1]=='.'&&x[i]=='.'&&x[i-1]=='x'&&x[i+1]=='x'){
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();	
} 
