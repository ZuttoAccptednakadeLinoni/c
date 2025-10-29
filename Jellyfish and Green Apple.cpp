#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
	int n,m;
	cin>>n>>m;
	
	n-=(n/m)*m;
	if(n==0){
		cout<<0<<endl;
		return ;
	}
	int q=__gcd(n,m);
	n/=q;
	m/=q;
	int ans=0;
	for(int i=0;i<30;i++){
		if(m==(1<<i)){
//			cout<<n<<endl;
			while(true){
				if(n>=m){
					n-=(n/m)*m;
					if(n==0){
						cout<<ans*q<<endl;
						return;
					}
				}
				else{
					ans+=n;
					n*=2;
	
				}
			}
		}
	}
	cout<<-1<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
