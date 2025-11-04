#include<bits/stdc++.h>
using namespace std;
#define int long long
int  arr[500005];
bool cmp(int a,int b){
	return a>b;
}
void solve(){
	int n,m;
	cin>>n>>m;
	int a,b;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		ans+=a;
		arr[i]=b-a;
	}
	if(n==1){
		ans+=arr[0];
		cout<<ans<<endl;
		return;
	}
	m-=n;
	sort(arr,arr+n,cmp);
	
	for(int i=0;i<n-1;i++){
		if(m==0||arr[i]<0)break;
		else {
			if(i==n-2){
				ans=max(ans,ans+arr[i]+arr[i+1]);
				m--;
			}
			else {
				ans+=arr[i];
				m--;	
			}
		}
	}
	cout<<ans<<"\n";
}

signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t;
	cin>>t;
	while(t--)solve();
}
