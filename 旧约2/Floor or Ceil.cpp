#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,e,r;
	cin>>x>>e>>r;
	int q=x;
	int n=e,m=r;
	for(int i=0;i<min(30,n+m);i++){
		if((q&1)&&n>0){
			q=(q>>1);
			n--;
		}else if(!(q&1) &&m>0){
			q=(q>>1);
			m--;
		}
		if(n==0){
			for(int j=0;j<min(30,m);j++){
				q=(q>>1)+(q&1);
			}
			break;
		}
		if(m==0){
			for(int j=0;j<min(30,n);j++){
				q=(q>>1);
			}
			break;
		}
		if(i==29)q=0;
	} 
	cout<<q<<" ";
	n=e,m=r;q=x;
	for(int i=0;i<min(30,n+m);i++){
		if((q&1)&&m>0){
			q=(q>>1)+(q&1);
			m--;
		}else if(!(q&1)&&n>0){
			q=(q>>1);
			n--;
		}
		if(n==0){
			for(int j=0;j<min(30,m);j++){
				q=(q>>1)+(q&1);
			}
			break;
		}
		if(m==0){
			for(int j=0;j<min(30,n);j++){
				q=(q>>1);
			}
			break;
		}
		if(i==29)q=0;
	} 
	cout<<q<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
