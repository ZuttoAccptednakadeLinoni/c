#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int brr[100005];
void solve(){
	int n;
	cin>>n;
//	int ans=0;
//	map<int,int>mp;
	int m=0,mn=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		brr[i]=arr[i];
	}
	sort(brr,brr+n);
	int ans=n-1;
	for(int i=n;i>=0;i--){
		if(arr[i]==brr[ans])ans--;
	}
	cout<<ans+1<<endl;
	
}
/*
1
8
6 6 5 6 7 8 9 10
*/
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
