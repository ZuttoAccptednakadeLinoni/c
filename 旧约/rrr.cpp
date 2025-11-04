#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,m,t,f4=0,f3=0;
	cin>>n>>m;
	m--;
	for(int i=0;i<n;i++){
		cin>>t;
		if(m%7==3){
			if(t>=35)f4++;
		}else{
			if(t>=35)f3++;
		}
		m++;
	}
	cout<<f3<<" "<<f4;
} 
