#include<bits/stdc++.h>
using namespace std;
#define int long long

int arr[105];
int brr[105];

signed main(){
	int n;char c;
	cin>>n;
	int fm=1;
	for(int i=0;i<n;i++){
		cin>>arr[i]>>c>>brr[i];
		fm=fm*brr[i]/__gcd(brr[i],fm);
	}
	for(int i=0;i<n;i++){
		arr[i]*=(fm/brr[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int q=__gcd(sum,fm);
	sum/=q;
	fm/=q;
	int ans=sum/fm;
	int f=1;
	if(ans!=0){
		cout<<ans;
		f=0;
	}
	
	if(sum%fm!=0){
		if(ans!=0)cout<<" ";
		int w=sum%fm;
		int t=__gcd(w,fm);
		cout<<w/t<<"/"<<fm/t;
		f=0;
	}
	if(f)cout<<"0";
}
