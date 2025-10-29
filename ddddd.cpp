#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],b[N];
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int q,f=1;
	for(int i=1;i<=n-1;i++){
		b[i]=__gcd(a[i],a[i+1]);
		if(b[i]<b[i-1]&&f==0){
			q=__gcd(a[i],a[i-2]);
			if(q<=a[i]&&q)
			
			f=1;
		}(b[i]<b[i-1]&&f==1){
			cout<<"NO";
			return;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		solve();
	}
}
