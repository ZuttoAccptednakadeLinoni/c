#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	int n,q=0,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	num=1;
	for(int i=1;i<n;i++){
		if(a[i]==a[i-1])num++;
		else{
			cout<<a[i-1]<<" "<<num<<endl;
			num=1;
		}
	}
	cout<<a[n-1]<<" "<<num<<endl;
}
