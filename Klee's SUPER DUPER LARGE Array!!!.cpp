#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>k>>n;
	int i=n,j=n+k-1,m;
	long long int sum=0,ans=INT_MAX;
	while(i<j){
		m=(i+j)/2;
		sum=(n+m)*(n-m+1)/2-(m+n+k)*(n-m+k-1)/2;
		if(sum>0)i=m+1;
		else j=m-1;
		
		ans=min(abs(sum),ans);
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
