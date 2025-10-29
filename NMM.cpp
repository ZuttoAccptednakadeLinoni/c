#include<iostream>
using namespace std;
int n;
int js(int n){
	if(n==1)return 1;
	else return (2*n-1)*n+js(n-1);
}
void sc(){
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<js(n)<<" "<<2*n-1<<endl;
		cout<<2<<" "<<n<<" ";
		sc();
		for(int i=n-1;i>=1;i--){
			cout<<2<<" "<<i<<" ";
			sc();
			cout<<1<<" "<<i<<" ";
			sc();
		}
	}
}
