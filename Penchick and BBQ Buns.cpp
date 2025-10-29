#include<bits/stdc++.h>
using namespace std;
int arr[27]={1,2,2,3,3,4,4,5,5,1,14,6,6,7,7,8,8,9,9,10,10,11,11,12,12,1,14};
void solve(){
	int n;
	cin>>n;
	if(n<26&&n%2==1){
		cout<<-1<<endl;
		return;
	}
	if(n%2==0){
		for(int i=1;i<=n/2;i++){
			cout<<i<<" "<<i<<" ";
		}
	}else{
		for(int i=0;i<27;i++){
			cout<<arr[i]<<" ";
		}
		for(int i=28;i<=n;i++){
			cout<<i/2+1<<" ";
		}
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
