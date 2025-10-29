#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	int x,y;
	cin>>n>>x>>y;
	bool m;
	if(x<y){
		m=n%x;
		cout<<n/x+m<<endl;
	}else{
		m=n%y;
		cout<<n/y+m<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
