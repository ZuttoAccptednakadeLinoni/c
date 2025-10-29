#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	int ans=0;
	if(k!=0){
		k-=n;
		ans++;
		n--;
	}
	while(k>0){
		k-=n;
		ans++;

		if(k>0){
			k-=n;
			ans++;
			n--;

		}else break;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
