#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
	int n,m;
	cin>>n>>m;
	int ans=0;
	int w=__gcd(n,m);
	n=n/w,m=m/w;
	cout<<w<<endl; 
	cout<<n<<" "<<m<<endl;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0&&i%m!=0){
			ans=(max(ans,i));
			int q=n/i;
			if(n%q==0&&q%m!=0){
				ans=(max(ans,q));
				break;
			}
		}
	}
	cout<<ans*w<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
