#include<bits/stdc++.h> 
using namespace std;



int main(){
	char c;
	int y=0,n=0;
	for(int i=0;i<5;i++){
		cin>>c;
		if(c=='Y')y++;
		else if(c=='N')n++;
		
	}
	if(n>=2)cout<<"-1\n";
		else if(y==4)cout<<"1\n";
		else cout<<"0\n";
}
