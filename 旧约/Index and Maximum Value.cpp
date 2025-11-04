#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m,a=0,q;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>q;
		a=max(a,q);
	}
	int b,c;
	char ch;
	for(int i=0;i<m;i++){
		cin>>ch>>b>>c;
		if(a<=c&&a>=b){
			if(ch=='+')a++;
			else a--;
		}
		cout<<a<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
