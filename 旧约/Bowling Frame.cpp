#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	cin>>a>>b;
	int s=a+b;
	for(long long i=1;i<=10000000;i++){
		if((1+i)*i/2>s){
			cout<<i-1<<endl;
			return;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
