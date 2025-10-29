#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin>>n>>m;
	int ans=n;
	for(long long i=2;i<=m;i++){
		for(long long j=i;j<=n;j+=i){
			if((j+i)%(i*i)==0)ans++;
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
