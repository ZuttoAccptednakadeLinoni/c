#include<iostream>
using namespace std;
long long a[300005];
long long j(int n){
	if(a[n]==0)return a[n]=((2*n-2)*j(n-2)+j(n-1))%1000000007;
	else {
		return a[n];
	}
}
int main(){
	a[0]=1;a[1]=1;a[2]=3;
	int t,n,m,x,y;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<m;i++){
			cin>>x>>y;
			if(x==y)n--;
			else n-=2;
		}
		cout<<j(n)<<endl;
	}
}
