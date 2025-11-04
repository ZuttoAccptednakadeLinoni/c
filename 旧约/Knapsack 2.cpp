#include<bits/stdc++.h>
using namespace std;
int w[105],v[105],dp[100005];
int main(){
	int n,m,max;
	cin>>n>>m;
	max=n*1000;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	memset(dp,0x3f,sizeof(dp));
	dp[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=max;j>=v[i];j--){
			dp[j]=min(dp[j],dp[j-v[i]]+w[i]);
		}
	}
	for(int i=max;i>0;i--){
		if(dp[i]<=m){
			cout<<i;
			return 0;
		}
	}
}
