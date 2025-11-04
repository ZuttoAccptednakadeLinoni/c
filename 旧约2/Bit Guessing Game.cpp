#include<bits/stdc++.h>
using namespace std;

void solve(){
	int q,cnt,n;
	int ans=0;
	cin>>q; 
	int t=0; 
	int f=0;
	int e=0;
	int y=q;
	int a=0;
	for(int i=0;i<30;i++){

		t++;
		cout<<"- "<<(1<<e)<<endl;
		f=q;
		cin>>q;	e+=q-f+1;ans+=(1<<e);a++;	
		if(a==y){
			break;
		}
	}
	cout<<"! "<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
