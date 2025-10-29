#include<bits/stdc++.h>
using namespace std;

void solve(){
	int l,r;
	cin>>l>>r;
	int ans=0;
	int j=0;
	if(l<r)swap(l,r);
	for(int i=30;i>0;i--){
		if((l>>i&1)==(r>>i&1))ans+=(r>>i&1)<<(i);
		else {
			j=i;
			break;
		}
	}

	

		if((((l>>(j-1))&1)==((r>>(j-1))&1))&&(!((l>>(j-1))&1))){
			ans+=(1<<(j-1));

		}
		else {
			ans+=(1<<j);

		}
		j-=2;
		for(j;j>=0;j--){
			if((l>>j&1)==(r>>j&1))ans+=(!(r>>j&1))<<j;
		}

	
	cout<<l<<" "<<r<<" "<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
