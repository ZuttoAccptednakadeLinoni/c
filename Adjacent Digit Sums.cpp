#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	cin>>a>>b;
	if(((a+1-b)%9==0&&((a+1-b))>0)||(b-a==1))cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
