#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x;
	cin>>n>>x;
	int q=x;
	int mm=0,li,lx;
	for(int i=0;i<31;i++){
		if(!((q>>i)&1)){
			mm=(1<<i);
			li=(1<<(i-1));
			lx=((1<<i)-1);
			break;
		}
	}
	for(int i=0;i<=min(n-2,lx);i++){
		cout<<i<<" ";
	}
	if(n-1<=lx&&mm>x&&n-1>=li){
		cout<<n-1<<endl;
	}else{
		for(int i=0;i<n-min(n-1,mm);i++){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
