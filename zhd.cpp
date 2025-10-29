#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	cout<<2*(n-2)+1<<" ";
	for(int i=1;i<=n-1;i++){
		cout<<"2 -1 ";
	}
	cout<<1<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
	
} 
