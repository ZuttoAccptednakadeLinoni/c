#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];

int main(){
	int n;
	cin>>n;
	cout<<(n+1)*2<<" "<<n*(n-1)/2+n*(n+1)/2+n+1<<" 2\n";
	for(int i=1;i<=n+1;i++){
		a[i]=i*2;
		b[i]=i*2-1;
	}
	for(int i=0;i<=n;i++)cout<<"1 2 ";
	cout<<endl;
	for(int i=2;i<=n+1;i++){
		for(int j=1;j<i;j++){
			cout<<b[i]<<" "<<a[j]<<endl;
		}
	}
	for(int i=2;i<n+1;i++){
		for(int j=1;j<i;j++){
			cout<<a[i]<<" "<<b[j]<<endl;
		}
	}
	for(int i=1;i<=n+1;i++){
		cout<<a[n+1]<<" "<<b[i]<<endl;
	}
}
