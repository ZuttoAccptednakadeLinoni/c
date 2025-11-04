#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	int n,x,y;
	cin>>n>>x>>y;
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	sort(arr,arr+x);
	int ans=0;
	for(int i=1;i<x;i++){
		if(arr[i]-arr[i-1]==2)ans++;
	}
	if(arr[0]-(arr[x-1]-n)==2)ans++;
	cout<<x-2+ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
