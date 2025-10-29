#include<bits/stdc++.h>
using namespace std;
int arr[33]; 
void solve(){
	int n;
	cin>>n;
	if(n%4==3||n%4==2)cout<<"Pinkie Pie\n";
	else cout<<"Fluttershy\n";
}

int main(){
	int t;
	cin>>t;arr[0]=2;
	for(int i=1;i<30;i++){
		arr[i]=arr[i-1]*2;
	}
	for(int i=1;i<30;i++){
		arr[i]--;
	}
	while(t--)solve();
}
