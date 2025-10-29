#include<bits/stdc++.h>
using namespace std;
int solve(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n=n/10;
	}
	if(sum>=10)return solve(sum);	
	else return sum;
}

int main(){
	int n;
	cin>>n;
	cout<<solve(n);

}
