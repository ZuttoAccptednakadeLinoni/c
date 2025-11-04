#include<bits/stdc++.h>
using namespace std;
int arr[105];


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	int q;
	int f=1,c=0;
	for(int i=0;i<k;i++){
		f=1,c=0;
		for(int j=0;j<n;j++){
			cin>>q;
			if(q!=arr[j]&&q!=0)f=0;
			else if(q==arr[j]) c=1;
		}
		if(f&&c)cout<<"Da Jiang!!!\n";
		else cout<<"Ai Ya\n";
	}
}
