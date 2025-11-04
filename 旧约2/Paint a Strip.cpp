#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int q=1;
	int num=1;
	while(q<n){
		q=(q+1)*2;
		num++;
	}
	cout<<num<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
