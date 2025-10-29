#include<bits/stdc++.h>
using namespace std;
long long arr[100005];

void solve(){
	int n,a,b;
	cin>>n>>a>>b;
	vector<long long>z;
	vector<long long>y;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(i<=b)z.push_back(arr[i]);
		if(i>=a)y.push_back(arr[i]);
	}
	long long ansy=0;
	long long ansz=0;
	sort(z.begin(),z.end());
	sort(y.begin(),y.end());

	for(int i=0;i<b-a+1;i++){
		ansz+=z[i];
		ansy+=y[i];
	}
	
	cout<<min(ansz,ansy)<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
