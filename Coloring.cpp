#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m,k;
	cin>>n>>m>>k;
	int q;
	int f=1;
	for(int i=0;i<m;i++){
		cin>>q;
		int w=((n%k)>0);
		if(q>(n/k+w)){
			f=0;
		}else if(q==(int)n/k+w)n--;
	}
	if(f)cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
