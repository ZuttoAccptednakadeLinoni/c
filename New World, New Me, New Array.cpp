#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k,p;
	cin>>n>>k>>p;
	if(k<0)k=-k;
	int ans=k/p+(k%p>0);
	
	if(ans<=n)cout<<ans<<endl;
	else cout<<-1<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
