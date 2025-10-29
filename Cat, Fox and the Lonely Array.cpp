#include<bits/stdc++.h>
using namespace std;
int n,a,k;
void solve(){
	k=1;
	vector<int> v(20,-1);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		for(int j=0;j<20;j++){
			if(a>>j&1){
				k=max(k,i-v[j]);
				v[j]=i;
			}
		}
	}
	for(int j=0;j<20;j++){
		if(v[j]!=-1){
			k=max(k,n-v[j]);
		}
	}	
	cout<<k<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}	
}
