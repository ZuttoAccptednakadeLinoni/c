#include<bits/stdc++.h>
using namespace std;

long long qzh[200005];
void solve(){
	int n,m;
	cin>>n>>m;
	long long q;
	long long qz=0,qzqz=0,ans=0;
	for(int i=0;i<n;i++){
		qz=0,qzqz=0;
		for(int j=0;j<m;j++){
			cin>>q;
			qz+=q;
			qzqz+=qz;
		}
		ans+=qzqz;
		qzh[i]=qz;
	}

	sort(qzh,qzh+n);
	qz=0,qzqz=0;
	for(int i=n-1;i>=1;i--){
		ans+=qzh[i]*(long long)i*(long long)m;
	}
	cout<<ans<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
