#include<bits/stdc++.h>
using namespace std;


int main(){
	long long n,k;
	cin>>n>>k;
	if(n%2==0&&k==n/2){
		cout<<n<<endl;
		return 0;
	}
	if(k>n/2){
		k=n-k;
	}
	cout<<n*k+1;
}
