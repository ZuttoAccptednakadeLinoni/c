#include<bits/stdc++.h>
using namespace std;



int main(){
	string s,ansz;
	int a;
	int maxz=0;
	for(int i=0;i<4;i++){
		cin>>s>>a;
		if(a>maxz){
			ansz=s;
			maxz=a;
		}
		
	}
	string ansy;
	int maxy=0;
	for(int i=0;i<4;i++){
		cin>>s>>a;
		if(a>maxy){
			ansy=s;
			maxy=a;
		}
		
	}
	if(maxz<maxy)cout<<ansy<<" beats "<<ansz;
	else cout<<ansz<<" beats "<<ansy;
}
