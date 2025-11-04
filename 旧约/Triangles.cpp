#include<bits/stdc++.h>
using namespace std;

long long qs(long long n){
	long long sum=0;
	for(long long i = 1; n - i * 2 + 1 >= 1; i++){
		sum+=(n-i*2+2)*(n-i*2+1)/2;
	}
	for(long long i=n;i>=1;i--){
		sum+=(1+i)*i/2;		
	}
	return sum;
}
//849586 233333 123456
//153307446989958297

int main(){
	long long n,a,b;
	cin>>n>>a>>b;
	long long int sum=0;
	sum=qs(n);
	sum-=(b)*(a+1-b);//…œ∑Ωºı…Ÿ 

	long long a1=a+1,b1=a+1;
	for(long long i=1;i<=a;i++){
		if(a+i>n)break;
		sum-=(a+1+i)-(max(i,b))-(max(i,a+1-b));
		
	}
	cout<<sum;
}














