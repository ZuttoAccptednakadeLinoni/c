//
// Created by k0itoYuu on 2025/6/17.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353

int jc[10000005];
int ksm(int i){
	int ans=1;
	int m=mod-2;
	while(m){
		if(m&1)ans=(ans*i%mod)%mod;
		i=i*i%mod;
		m>>=1;
	}
	return ans%mod;
}

signed main(){
 	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;

	n/=3;
	int ans=0;
//	cout<<q<<endl;
	jc[1]=1;
	jc[0]=1;
	for(int i=2;i<=n;i++){
		jc[i]=jc[i-1]*i%mod;
	//	cout<<jc[i]<<endl;
	}
	ans=ans+((jc[n]*ksm(jc[n/2])%mod)*ksm(jc[n/2])%mod)%mod;
	for (int i=0;i<n;i++){
		int arr[3];
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr,arr+3);
		int q=1;
		if (arr[0]==arr[1]){
			q++;
			if (arr[1]==arr[2])q++;
		}
		ans=(ans*q)%mod;
	}

	cout<<ans<<'\n';
}