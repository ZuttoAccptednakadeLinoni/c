#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long int b,c,d,a=0;
	cin>>b>>c>>d;
	for(int i=0;i<=61;i++){
		if(((b>>i&1)==0)&&((c>>i&1)==1)&&((d>>i)&1)==0);
		else if(((b>>i&1)==1)&&((c>>i&1)==0)&&((d>>i&1)==1));
		else if(((b>>i&1)==0)&&((c>>i&1)==0)&&((d>>i&1)==0));
		else if(((b>>i&1)==0)&&((c>>i&1)==0)&&((d>>i&1)==1))a+=(1ll<<i);
		else if(((b>>i&1)==1)&&((c>>i&1)==1)&&((d>>i&1)==1));
		else if(((b>>i&1)==1)&&((c>>i&1)==1)&&((d>>i&1)==0))a+=(1ll<<i);
		else if(((b>>i&1)==0)&&((c>>i&1)==0)&&((d>>i&1)==0));
		else {
			cout<<-1<<endl;
			return;
		}
	}
	cout<<a<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
