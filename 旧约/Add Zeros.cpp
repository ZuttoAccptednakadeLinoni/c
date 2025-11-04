#include<bits/stdc++.h>
using namespace std;
map<long long, vector<int> > g;
map<long long, long long> dp;
long long dfs(long long now){
	if(dp[now])return dp[now];
	long long ans=now;
	for(int i:g[now])ans=max(ans,dfs(now+i));
	return dp[now]=ans;
}

void solve(){
	int n;
	cin>>n;
	g.clear(), dp.clear();
	long long x;
	for(int i=1;i<=n;i+f  +){
		cin>>x;
		if(i!=1&&x>=n-i+1)g[x-(n-i+1)].push_back(i-1);
	}
	cout<<dfs(0)+n<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
