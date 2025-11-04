#include<bits/stdc++.h>
using namespace std;



int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a<c){
		cout<<1;
		return 0;
	}
	if(a+c+d<b){
		cout<<-1;
		return 0;
	}
	int l=min(c+d,b);
	int ly=b-l;
	if(ly>a+d){
		cout<<-1;
		return 0;
	}
	int ans=(ly+a)/c+((ly+a)%c!=0);
	cout<<ans*2-1;
}
/*
f(i,x,y) 
:i 0/1 pos
*/
