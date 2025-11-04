#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,m,xq,yq,xw,yw;
	char c;
	bool b=0,e=1;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c;
			if(c=='x'&&b==0){
				xq=j;
				yq=i;
				b=1;
			}
			if(c=='x'){
				xw=j;
				yw=i;
				
			}
		}
	}
	int l=xw-xq+1;
	int h=yw-yq+1;
	int q=__gcd(l,h);
	for(int i=0;i<h/q;i++){
		for(int j=0;j<l/q;j++){
			cout<<'x';
		}
		cout<<endl;
	}
} 
