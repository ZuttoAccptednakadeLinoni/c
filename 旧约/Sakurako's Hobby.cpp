#include<bits/stdc++.h>
using namespace std;

int a[200005],c[200005],num[200005];

void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[i]=0;
		num[i]=0;
	}
	string s;
	cin>>s;
	for(int i=1;i<=n;i++){
		if(c[i])continue;
		int z=0;
		while(!c[i]){
			z+=s[i-1]=='0';
			c[i]=1;
			i=a[i];
			
		}
		while(c[i]!=2){
			num[i]=z;
			c[i]=2;
			i=a[i];
			
		}
	}
	for(int i=1;i<=n;i++){
			cout<<num[i]<<" ";
		}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
