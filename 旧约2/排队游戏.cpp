#include<bits/stdc++.h>
using namespace std;
int arr[33]; 
void solve(){
	int n;
	cin>>n;
	int q;
	for(int i=0;i<30;i++){
		if(n>=arr[i])q=arr[i];
	}
	//cout<<q<<endl;
	if((q-n)%2==0)cout<<"Pinkie Pie\n";
	else cout<<"Fluttershy\n";
}

int main(){
	int t;
	cin>>t;arr[0]=2;
	for(int i=1;i<30;i++){
		arr[i]=arr[i-1]*2;
	}
	arr[0]=0;
	for(int i=1;i<30;i++){
		arr[i]--;
	}
	while(t--)solve();
}
