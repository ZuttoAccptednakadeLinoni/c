#include<iostream>
using namespace std;

void solve(){
	long long r;
	long long ans=0;
	cin>>r;
	long long h=r;
	for(long long i=0;i<=r;i++){
		while(i*i+h*h>=(r+1)*(r+1)){
			h--;
		}
		long long c=h;
		while(i*i+c*c>=r*r&&c>0){
			c--;
			ans++;
		}
	}
	cout<<ans*4<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
