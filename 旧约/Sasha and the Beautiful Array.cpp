#include<iostream>
using namespace std;
int main(){
	int t,n,q,max=-1,min=1000000007;
	cin>>t;
	while(t--){
		max=-1,min=1000000007;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>q;
			if(q>max)max=q;
			if(q<min)min=q;
		}
		cout<<max-min<<"\n";
	}
} 
