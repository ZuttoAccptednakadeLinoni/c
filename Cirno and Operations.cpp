#include<bits/stdc++.h>
using namespace std;
int arr[200];
void solve(){
	int n;
	cin>>n;
	int m=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		m+=arr[i];
	}
	if(n==1){
		cout<<m<<endl;
		return;
	}
	
	for(int i=n;i>1;i--){
		int sum=0;
		for(int j=i;j>1;j--){
			arr[j-1]=arr[j]-arr[j-1];
			sum+=arr[j-1];
			cout<<arr[j-1]<<" ";
		}
		cout<<endl;
		m=max(m,max(sum,-sum));
		cout<<m<<endl;
	}
	cout<<m<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
