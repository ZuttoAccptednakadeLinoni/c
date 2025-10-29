#include<iostream>
#include<cmath>
using namespace std;
long long arr[100];
int main(){
	int t;
	int a,b,q;
	cin>>t;
	arr[0]=1;
	for(int i=1;i<=30;i++){
		arr[i]=arr[i-1]*2;
	} 
	while(t--){
		cin>>a>>b;
		q=1;
		if(a==1){
			cout<<b<<endl;
			continue;
		}
		while(arr[q]<b){
			q++;
		}
		cout<<arr[q-1]-1<<" "<<b-arr[q-1]+1<<" ";
		for(int i=3;i<=a;i++){
			cout<<0<<" ";
		}
		cout<<endl;
		
	}
}
