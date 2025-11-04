#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a=0,b=0;
	for(int i=0;i<n;i++){
		int q;
		cin>>q;
		if(q==1)a++;
		else if(q==2)b++;
	}
	if(a>b)cout<<"Kobayashi\n";
	else if(a<b)cout<<"Tohru\n";
	else cout<<"Draw\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
