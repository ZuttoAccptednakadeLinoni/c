#include<bits/stdc++.h>
using namespace std;
int a[3];
int main(){
	int t,b,c,num;
	cin>>t;
	while(t--){
		num=0;
		cin>>a[0]>>a[1]>>a[2];
		if((a[0]+a[1]+a[2])%2==0){
			if(a[0]+a[1]<a[2])cout<<a[0]+a[1]<<endl;
			else cout<<(a[0]+a[1]+a[2])/2<<endl;
		}
		else cout<<-1<<endl;
	}
}
