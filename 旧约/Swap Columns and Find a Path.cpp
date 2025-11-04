#include<bits/stdc++.h>
using namespace std;
int arr1[5000],arr2[50000];
void solve(){
	int n;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=max(arr1[i],arr2[i]);
	}
	int mans=ans+min(arr1[0],arr2[0]);
	for(int i=1;i<n;i++){
		mans=max(mans,ans+min(arr1[i],arr2[i]));
	}
	cout<<mans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
