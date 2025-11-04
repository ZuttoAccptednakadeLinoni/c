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

main(){
 	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	
	int q=n/2+(n%2);
	int a=1,b=1;
	int sum=0;
//	cout<<q<<endl;
	jc[1]=1;
	jc[0]=1;
	for(int i=2;i<=n;i++){
		jc[i]=jc[i-1]*i%mod;
	//	cout<<jc[i]<<endl;
	}
	
	for(int i=q;i>=1;i--){
	//	cout<<"!!!"<<n-i<<endl;
	//	cout<<ksm(n-i-i+1)%mod<<endl;
		sum=sum+(((jc[n-i]*ksm(jc[n-i-i+1])%mod))*jc[n-i]%mod);
		sum=sum%mod;
	//	cout<<sum<<endl;
	}
	cout<<sum%mod<<'\n';
}
