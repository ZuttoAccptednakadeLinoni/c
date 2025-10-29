#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,e,r;
	cin>>x>>e>>r;
	int q=x;
	int n=0;
	while(q>0){
		q/=2;
		n++;
	}
	int y=0;
	if(e==0){
		for(int i=e;i<=min(r,n)-1;i++){
			if((x>>i)&1){
				y=1;
			}
		}
		if(y)cout<<((x>>min(n,(e+r)))+1)<<" ";
		else cout<<((x>>min((e+r),n)))<<" ";
	}
	else {
		for(int i=0;i<=min(r-1,n);i++){
			if((x>>i)&1){
				y=1;
			}
		}
		int c=x;
		c=(x>>min(r,n))+y;
		cout<<(c>>min(e,n))<<" ";
	}
	int f=0;
	for(int i=e;i<=min(e+r-1,n);i++){
		if((x>>i)&1){
			f=1;
		}
	}
	if(f)cout<<((x>>min(n,(e+r)))+1)<<endl;
	else cout<<((x>>min((e+r),n)))<<endl;	
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
