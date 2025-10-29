#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k,q;
	cin>>n>>k;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>q;
		v.push_back(q);
	}
	sort(v.begin(),v.end());
	vector<int>a(k);
	bool f=1;
	for(int i=0;i<v.size();i++){
		if((int)((v[i]-v[0])/k)%2!=0){
			f=0;
			break;
		}
		a[(v[i]-v[0])%k]=v[i];
	}
	int ans=0;
	cout<<"ans"<<f<<" ";
	for(int i=0;i<k;i++){
		cout<<a[i]<<" ";
		ans=max(ans,a[i]);
	}
	cout<<endl;
	if(f)cout<<ans<<endl;
	else cout<<-1<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
