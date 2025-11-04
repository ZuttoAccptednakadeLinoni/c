#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,q,max=0,w;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>q;
		if(max<q)max=q;
	}
	cin>>w;
	cout<<w+max<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
} 
