#include<bits/stdc++.h>
using namespace std;
string arr[10];

int main(){
	int ansi,ansj;
	for(int i=1;i<=9;i++){
			cin>>arr[i];
	}
	for(int i=2;i<=8;i++){
		for(int j=1;j<=7;j++){
			if(arr[i][j]=='8'){
				ansi=i;ansj=j;
			}
		}
	}
	cout<<ansi<<" "<<ansj<<endl;
	for(int i=1;i<=9;i++){
		for(int j=0;j<9;j++){
			if(i==ansi&&j==ansj)cout<<8;
			else cout<<'*';
		}
		cout<<endl;
	}
} 
