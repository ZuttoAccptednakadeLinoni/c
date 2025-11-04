#include<bits/stdc++.h>
using namespace std;
int arr[505];
void solve(){
    string s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<4;j++){
			if(s[j]=='#')arr[i]=j+1;
		}
	} 
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
