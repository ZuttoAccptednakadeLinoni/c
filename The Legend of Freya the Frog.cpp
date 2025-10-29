#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y,k;
	cin>>x>>y>>k;
	int q;
	int yy=0;
	q=x-y;
	if(q<0){
		q=-q;
		
	}else if(q>0) yy=-1;
	int ans=0;
	bool w=q%k;
	ans=(q/k+w)*2+yy;
	w=min(x,y)%k;
	ans+=(min(x,y)/k+w)*2;
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
