#include<bits/stdc++.h>
using namespace std;
int arr[200005];

void solve(){
	string s;
	cin>>s;
	long long q=s.size();
	s=" "+s;
	map<long long,long long>m;
	long long ans=0;
	m[0]=1;
	for(int i=0;i<=s.size();i++)arr[i]=0;
	for(int i=1;i<=s.size();i++){
		if(s[i]=='1')arr[i]=arr[i-1]+1;
		else arr[i]=arr[i-1]-1;
		ans=(ans+m[arr[i]]*(q-i+1)%1000000007)%1000000007;
		m[arr[i]]=(m[arr[i]]+i+1)%1000000007;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
