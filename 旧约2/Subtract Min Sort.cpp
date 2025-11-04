#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			cout<<"No"<<endl;
			return ;
		}else{
			arr[i+1]-=arr[i];
		}
	}
	cout<<"Yes"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
