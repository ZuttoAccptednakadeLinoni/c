#include<bits/stdc++.h>
#define int long long 
using namespace std;
int arr[300005]; 
int cf[300005];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		cf[i]=arr[i]-arr[i-1];
	}
	int ans=0;
	for(int i=1;i<=n-1;i++){
		ans=arr[i]-ans;
		
	} 
	if(n%2==1)cout<<"YES\n"; 
	else{
		if(ans<=arr[n])cout<<"YES\n";
	else cout<<"NO\n";
	}
	/*
	if(n==2){
		if(arr[2]<arr[1]){
			cout<<"NO\n";
		}else cout<<"YES\n";
		return;
	}else if(n==3){
		cout<<"YES\n";
		return;
	}
	int sum=0;
	for(int i=1;i<=n-1;i++){
		if(cf[i]<0){
			cf[i+2]+=cf[i];
			cf[i]=0;
		}
		sum+=cf[i];
	}
	if(n%2==1)cout<<"YES\n"; 
	else{
		if(cf[n]>0)cout<<"YES\n";
		else{
			int q=0,w=0,e=0;
			for(int i=0;i<=n-2;i++)q+=cf[i];
			w+=cf[n-1];
			e+=cf[n];
			if(arr[0]>q-w+e)cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
*/	
	
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
