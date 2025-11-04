#include<iostream>
using namespace std;
int main(){
	int t,a,b,q,w;
	cin>>t;
	while(t--){
		cin>>a>>b;
		q=b%2;
		w=b/2;
		if(a<w*7+q*11)cout<<q+w<<endl;
		else cout<<q+w+(a-w*7-q*11+14)/15<<endl;
	}
}
