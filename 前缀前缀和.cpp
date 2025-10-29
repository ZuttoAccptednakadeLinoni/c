#include<bits/stdc++.h>
using namespace std;

long long arr[100005];

int main(){
	long long n;
	cin>>n;
	long long q,ans=0;
	for(int i=1;i<=n;i++){
		cin>>q;
		arr[i]=arr[i-1]+q;
	}
	for(long long i=1;i<=n;i++){
		for(long long j=ans;j+i<=n;j++){
			if((arr[j+i-1]-arr[i-1])%7==0)ans=max(ans,j);
		}
	}
	cout<<ans;
}
