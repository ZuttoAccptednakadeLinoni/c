#include<iostream>
using namespace std;
int main(){
	int t,n,k,m1,q,m;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cin>>m1;
		for(int i=1;i<n;i++)cin>>m;
		for(int i=0;i<k;i++){
			cin>>q;
			cout<<min(q,m1-1)<<" ";
		}
		cout<<endl;
	}
}
