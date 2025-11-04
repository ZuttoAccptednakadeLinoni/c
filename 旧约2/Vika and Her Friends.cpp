#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m,k;
	cin>>n>>m>>k;
	int a,b,c,d;
	cin>>a>>b;
	int f=0;
	for(int i=0;i<k;i++){
		cin>>c>>d;
		if((abs(c-a)+abs(d-b))%2==0)f=1;
	}
	if(f)cout<<"NO\n";
	else cout<<"YES\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
