#include<bits/stdc++.h>
using namespace std;

int Log[200005],n,q,a[200005],l,r,s[200005];

struct ST_map{
	int Gcd[200005][21];
	void Init(){
		for(int i=1;i<=n-1;i++)Gcd[i][0]=s[i];
		for(int i=1;i<=20;i++){
			for(int j=1;j<=n-1;j++){
				Gcd[j][i]=__gcd(Gcd[j][i-1],Gcd[min(j+(1<<(i-1)),n)][i-1]);                     
			}
		}
	}
	int Query(int l,int r){
		int logx=Log[r-l+1];
		return __gcd(Gcd[l][logx],Gcd[r-(1<<logx)+1][logx]);
	}
}ST;

void solve(){
	cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<n;i++)s[i]=abs(a[i+1]-a[i]);
	ST.Init();
	while(q--){
		cin>>l>>r;
		if(l==r)cout<<"0\n";
		else cout<<ST.Query(l,r-1)<<"\n";
	}
	cout<<endl;
}

int main(){
	int cnt=0,last=2;
	for(int i=2;i<=200000;i++){
		if(i==last){
			cnt++;
			last*=2;
		}Log[i]=cnt;
	}
	int t;
	cin>>t;
	while(t--)solve();
} 
