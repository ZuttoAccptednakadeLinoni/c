#include<bits/stdc++.h>
using namespace std;

int arr[100005],a[100005];
int q(int i){
	if(i<0)return -i;
	else return i;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		a[i]=arr[i]-arr[i-1];
	}
	int ans=INT_MAX,m=0,s=0;
	for(int i=2;i<=n;i++){
		m+=q(a[i]);
	}
	for(int i=2;i<n;i++){
		ans=min(ans,m-q(a[i])-q(a[i+1])+q(arr[i+1]-arr[i-1]));
	}
	for(int i=3;i<=n;i++){
		s+=q(a[i]);
	}
	ans=min(ans,s);
	for(int i=2;i<=n-1;i++){
		s+=q(a[i]);
	}
	cout<<min(ans,s);
}
