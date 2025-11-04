#include<bits/stdc++.h>
using namespace std;
int j(int n1,int n2){
	int q=1;
	for(int i=n1;i>n2;i--){
		q*=i;
		q=q%(1000000007);
	}
	return q;
}
void solve(){
	int n,k;
	cin>>n>>k;
	int w,q;
	for(int i=0;i<n;i++){
		cin>>q;
		w+=q;
	}
	int ans=0;
	for(int i=k;i>=k/2+1;i--){
		ans+=j(w,w-i)*j(n-w,(n-w)-(k-i));
		ans=ans%(1000000007);
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
