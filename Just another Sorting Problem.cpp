#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int num=0;
	for(int i=1;i<=n;i++){
		int q;
		cin>>q;
		if(q!=i)num++;
	}
	cout<<num<<endl;
	if(n==2){
		cout<<"Alice\n";
		return;
	}
	if(num==0){
		cout<<"Alice\n";
		return;
	}
	if(s=="Alice"&&num<3){
		cout<<"Alice\n";
		return;
	}
	cout<<"Bob\n";
	
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
