#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a;
	string s;
	cin>>a>>s;
	int q=(int)sqrt(a);
	bool f=0;
	if(q*q==a){
		for(int i=1;i<=q;i++){
			for(int j=1;j<=q;j++){
				if(i==1||j==1||i==q||j==q){
					if(s[(i-1)*q+j-1]!='1')f=1;
				}else if(s[(i-1)*q+j-1]!='0')f=1;
			}
		}
		if(f==1)cout<<"NO\n";
		else cout<<"YES\n";
	}else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
