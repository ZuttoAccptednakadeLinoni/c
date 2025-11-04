#include<bits/stdc++.h>
using namespace std;

int arr[6][6]={{0,5,0,7,0,0},{0,0,4,0,0,0},{8,0,0,0,0,9},{0,0,5,0,0,6},{0,0,0,5,0,0},{3,0,0,0,1,0}};



int main(){
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<6;i++){
		cout<<i<<": ";
		for(int j=0;j<6;j++){
			if(arr[i][j]!=0)cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"0 1 2 5 4 3\n";
	cout<<endl;
	cout<<"0 1 3 2 5 4\n";
} 
