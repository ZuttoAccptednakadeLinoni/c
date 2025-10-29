#include<bits/stdc++.h>
using namespace std;
string s;
int a[300005],k;
bool check(int x){
	int cnt=0;
	char l='R';
	for(int i=0;i<s.size();i++){
		if(a[i]>x){
			if(s[i]=='B'&&l!=s[i])cnt++;
			l=s[i];
		}
	}
	return cnt<=k;
}
void solve(){
	int n,ans;
	cin>>n>>k;
	cin>>s;
	int l=0,r=0;
	for(int i=0;i<n;i++){
			cin>>a[i];
			r=max(r,a[i]);
		}
	while(l<=r){
		int mid=(l+r)/2;
		if(check(mid)){
			r=mid-1;
			ans=mid;
		}
		else l=mid+1;
	}
	cout<<ans<<endl;
	
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
