#include<bits/stdc++.h>
using namespace std;



int main(){
	int tm,s,t;
	cin>>tm>>s>>t;
	if(tm>=35&&t>=33&&s==1){
		cout<<"Bu Tie\n";
		cout<<tm;
	}else if(tm>=35&&t>=33&&s==0){
		cout<<"Shi Nei\n";
		cout<<tm;
	}else if((tm<35||t<33)&&s==1){
		cout<<"Bu Re\n";
		cout<<t;
	}else{
		cout<<"Shu Shi\n";
		cout<<t;
	}
}
