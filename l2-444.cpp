#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,a,b;
	cin>>n>>a>>b;
	for(int i=a;i<=b;i++){
		int now=1;
		for(int j=n;j>0;j--){
			if((i/now)%j!=0)break;
			if(j==1)cout<<i<<endl;
			now*=10;
		}
	}
}
