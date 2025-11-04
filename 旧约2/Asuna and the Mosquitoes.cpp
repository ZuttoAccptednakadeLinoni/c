#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	int n,q;
	cin>>n;
	int m=0;
	vector<int>o;
	vector<int>v; 
	for(int i=0;i<n;i++){
		cin>>q;
		if(arr[i]%2==1)o.push_back(q);
		else v.push_back(q);
	}int ans=0;
	sort(o.begin(),o.end());
	if(v.empty()){
		cout<<o[o.size()-1]<<endl;
	}else{
		
		for(int i=0;i<o.size()-1;i++){
			ans+=o[i]-1;
		}
		ans+=o[o.size()];
		for(int i=0;i<v.size();i++){
			ans+=v[i];
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
