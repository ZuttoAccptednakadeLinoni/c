#include<bits/stdc++.h>
using namespace std;

unsigned int arr[200005];


void solve(){
	int n;
	cin>>n;
	cin>>arr[1];
	bool b=arr[1]&1;
	bool f=1;
	for(int i=2;i<=n;i++){
		cin>>arr[i];
		if((arr[i]&1)!=b)f=0;
	}
	if(!f){
		cout<<-1<<endl;
		return ;
	}
	if(arr[1]%2==1){
		cout<<30<<endl;
		for(int i=29;i>=0;i--){
			cout<<(1ll<<i)<<" ";
		}
		cout<<endl;
	}else{
		cout<<31<<endl;
		for(int i=29;i>=0;i--){
			cout<<(1ll<<i)<<" ";
		}
		cout<<1<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
