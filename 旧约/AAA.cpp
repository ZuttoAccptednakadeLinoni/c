#include<bits/stdc++.h>
using namespace std;
long long fpow(long long a,long long b,long long p){
	int r=1;
	int a1=a,b1=b;
	while(b>0){
		if(b%2==1)r=r*a%p;
		b=b/2;
		a=(a*a)%p;
	}
	r=r%p;
	cout<<r<<" ";
	return r;
}

int main(){
	long long n,m,p,n1;
	cin>>n>>m>>p;
	n1=fpow(2,n,p)-1;
	int sum=fpow(2,n*m,p);
	cout<<sum<<endl;
	sum-=fpow(2,(m-1)*(n),p);
	
	for(int i=1;i<m;i++){
		sum-=fpow(2,(m-i)*(n),p)*n1;
		cout<<sum<<endl;
	}
	cout<<sum;
}
