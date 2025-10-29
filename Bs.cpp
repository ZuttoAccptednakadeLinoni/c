#include<iostream>
using namespace std;
int arr[1005];
int main(){
	int t,n,num,num2;
	cin>>t;
	while(t--){
		num=0,num2=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			if(arr[i]==2)num++;
		}
		if(num%2==1){
			cout<<"-1\n";
			continue;
		}
		for(int i=1;i<=n;i++){
			if(arr[i]==2)num2++;
			if(num2==num/2){
				cout<<i<<"\n";
				break;
			}
		}
	}
} 
