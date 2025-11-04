#include<bits/stdc++.h>
using namespace std;
int a[100];
void solve(){
	int n,m,ans=0;
	char q;
	for(char i=0;i<=10;i++){
		a[i]=0;
	}	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>q;
		a[q-'A']++;
	}	
	for(int i=0;i<='G'-'A';i++){
		ans+=max((m-a[i]),0);
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
