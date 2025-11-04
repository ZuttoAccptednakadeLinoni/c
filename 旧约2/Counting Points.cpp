#include<bits/stdc++.h>
using namespace std;
#define int long long
int x[200005];
int r[200005];
void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<n;i++){
		cin>>r[i];
	}
	map<int,int>p;
	p.clear();
	for(int i=0;i<n;i++){
		int j=r[i];
		int num=0;
		while(num<=r[i]){
			if(j*j<=r[i]*r[i]-num*num){
				p[x[i]-num]=max(p[x[i]-num],j+1);
				p[x[i]+num]=max(p[x[i]+num],j+1);
				num++;
			}else j--;
			
		}
	}
	int ans=p.size();
	for(auto x:p){
		ans+=(x.second-1)*2;
	}
	cout<<ans<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
