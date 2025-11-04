#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	if(n<5){
		cout<<-1<<endl;
		return;
	}
	for(int i=n;i>5;i--)if(i%2==1)cout<<i<<" ";
	cout<<"1 3 5 4 2 ";
	for(int i=5;i<=n;i++)if(i%2==0)cout<<i<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
