#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	int q=0,a,ans=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>=k)q+=a;
		else if(a==0&&q>0){
			ans++;
			q--;
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
