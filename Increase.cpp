#include<bits/stdc++.h>
using namespace std;
long long a[200005],Min=INT_MAX,b[200005],mmax=0,mmin=INT_MAX;
void solve(){
	long long n,ans=0,q,f=0,mmin=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];		
	}
	cin>>q;
	for(int i=0;i<n;i++){
		
		if(q<=max(b[i],a[i])&&q>=min(b[i],a[i])&&f==0){
			ans++;f=1;
		}
		else {
			mmin=min(mmin,abs(a[i]-q));
			mmin=min(mmin,abs(b[i]-q));
		}
		ans+=abs(a[i]-b[i]);
	}
	if(f==1)cout<<ans<<endl;
	else cout<<ans+mmin+1<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
