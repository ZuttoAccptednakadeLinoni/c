#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int n,q;
	cin>>n;
	map<int,int>m;
	for(int i=0;i<n;i++){
		cin>>q;
		m[q]++;
	}
	int ans=0;
	for(auto i:m){
		int q=((1<<31)-1)-i.first;
		//cout<<q<<" ";
		if(m[q]>0){
			ans+=max(m[q],i.second);
			m[q]=0;
			i.second=0;
//			cout<<m[q]<<" "<<i.second;
		}else {
			ans+=i.second;
			i.second=0;
		}
//		cout<<ans<<endl;
	}
	cout<<ans<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
