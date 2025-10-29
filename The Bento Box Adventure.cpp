#include<bits/stdc++.h>
using namespace std;

int arr[6];
int main(){
	int a;
	for(int i=0;i<5;i++){
		cin>>a;
		arr[a]++;
	}
	for(int i=1;i<=5;i++){
		if(arr[i]==0){
			cout<<i;
			return 0;
		}
	}
}
