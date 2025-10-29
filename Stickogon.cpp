#include<iostream>
using namespace std;
int a[105];
int main() {
	int n,q,max=0,num=0;
	int t;
	cin>>t;
	while(t--) {
		for(int i=0; i<105; i++) {
			a[i]=0;
		}
		max=0,num=0;
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>q;
			a[q]++;
			if(q>max)max=q;
		}
		for(int i=1; i<=max; i++) {
			num=a[i]/3;
		}
		cout<<num<<endl;
	}

}
