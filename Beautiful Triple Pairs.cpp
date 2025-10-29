#include<bits/stdc++.h>
using namespace std;
int a[1000006];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	map<long long ,long long >m1,m2,m3,m;
	int b=10;
	long long cnt=0;
	for(int i=1;i<=n-2;i++){
		m1[a[i]*b+a[i+1]]++;
		m2[a[i]*b+a[i+2]]++;
		m3[a[i+1]*b+a[i+2]]++;
		m[a[i]*b*b+a[i+1]*b+a[i+2]]++;
		cnt+=m1[a[i]*b+a[i+1]]-1;
		cnt+=m2[a[i]*b+a[i+2]]-1;
		cnt+=m3[a[i+1]*b+a[i+2]]-1;
		cnt-=(m[a[i]*b*b+a[i+1]*b+a[i+2]]-1)*3;
	}
	cout<<cnt<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
