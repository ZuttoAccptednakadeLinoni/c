#include<bits/stdc++.h>
using namespace std;
double arr[31];
void solve(){
	double n;
	cin>>n;
	double q=n;
	for(int i=1;i<=14;i++){
		cout<<q<<" "<<arr[i]<<endl;
		if(q<=arr[i]){
			q=q-arr[i];//cout<<1;
		}
		//else //cout<<0;
	}
	cout<<endl;
	q=(n-1)*0.5+1;
	for(int i=0;i<=14;i++){
		if(q<arr[i]){
			cout<<1;q-=arr[i];
		}
		else cout<<0;
	}
}

int main(){
	int t;
	cin>>t;
	arr[0]=1;
	for(int i=1;i<14;i++){
		arr[i]=arr[i-1]/2;
	//	cout<<arr[i]<<endl;
	}
	while(t--)solve();
}
