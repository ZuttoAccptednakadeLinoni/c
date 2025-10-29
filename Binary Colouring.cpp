#include<bits/stdc++.h>
using namespace std;
int a[40];
void solve() {
	long long int x;
	int num=0;
	cin>>x;
	cout<<32<<"\n";
	for(int i=0; i<32; i++) {
		if(x>>i&1)a[i]=1;
		else a[i]=0;
	}
	for(int i=0; i<32; i++) {
		if(a[i]==1) {
			num++;
		} else {
			if(num>1) {
				for(int j=i-num;j<=i;j++){
					if(j==i-num)a[j]=-1;
					else if(j==i)a[j]=1;
					else a[j]=0;
				}
				i--;
			}
			num=0;
		}
	}
	for(int i=0;i<32;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
