#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin>>n>>m;
	cout<<"? 1 1"<<endl;
	int q;
	cin>>q;
	int w;
	if(1+q>n){
		cout<<"? "<<n<<" "<<1+q<<endl;
		cin>>w;
		cout<<"! "<<n-w<<" "<<1+q<<endl;
	}else if(1+q>m){
		cout<<"? "<<1+q<<" "<<m<<endl;
		cin>>w;
		cout<<"! "<<1+q<<" "<<m-w<<endl;
	}
	else{
		cout<<"? "<<1+q<<" "<<1+q<<endl;
		cin>>w;
		int e;
		cout<<"? "<<1+q-w<<" "<<1+q<<endl;
		cin>>e;
		if(e==0)cout<<"! "<<1+q-w<<" "<<1+q<<endl;
		else cout<<"! "<<1+q<<" "<<1+q-w<<endl<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
