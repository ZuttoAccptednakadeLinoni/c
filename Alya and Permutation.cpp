#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	if(n==6){
		cout<<7<<endl<<"1 2 4 6 5 3 \n";
		return;
	}
	if(n%2==0){
		int q=0;
		while(n>=(1<<q))q++;
		cout<<((1<<(q))-1)<<endl;
		int w=1<<(q-1);
		for(int i=1;i<=n;i++){
			if(i==1||i==3||i==w-2||i==w-1||i==w)continue;
			else cout<<i<<" ";
		}
		cout<<"1 3 "<<w-2<<" "<<w-1<<" "<<w;
	}else {
		cout<<n<<endl;
		for(int i=1;i<=n;i++){
			if(i==1||i==3||i==n-1||i==n)continue;
			else cout<<i<<" ";
		}
		cout<<"1 3 "<<n-1<<" "<<n;
	}
	cout<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
