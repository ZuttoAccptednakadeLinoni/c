#include<bits/stdc++.h>
using namespace std;



int main(){
	double a,b;
	int q;
	cin>>a>>q>>b;
	double c=a;
	if(q==0){
		c=c*2.455;
	}else{
		c=c*1.26;
	}
	printf("%0.2f ",c);
	
	if(c>b)cout<<"T_T";
	else cout<<"^_^";
} 
