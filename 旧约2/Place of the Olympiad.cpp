#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,w,x;
	cin>>n>>w>>x;
	int q=x/n+(x%n>0);
	int i=1,j=q;
	//cout<<q<<endl;
	int ans=q;
	while(i<=j){
		int m=(i+j)/2;
		int ne=q/m*(m+1);
		if(q%m==0)ne--;
		else ne+=q%m;
		if(ne<=w){
			j=m-1;
			ans=m;
		}
		else i=m+1;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
