#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,ans;
	char q;
	int a=0,b=0,c=0,d=0;
	cin>>n;
	for(int i=0;i<4*n;i++){
		cin>>q;
		if(q=='A')a++;
		else if(q=='B')b++;
		else if(q=='C')c++;
		else if(q=='D')d++;
		else if(q=='q');
	}
	ans=min(a,n)+min(b,n)+min(c,n)+min(d,n);
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
