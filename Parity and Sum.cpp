#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,ans,q;
	vector<int>o;
	vector<int>e;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		if(q%2==1)e.push_back(q);
		else o.push_back(q);
	}
	if(o.size()==0||e.size()==0){
		cout<<0<<endl;
		return ;
	}
	sort(o.begin(),o.end());
	sort(e.begin(),e.end());
	if(o[o.size()-1]<e[e.size()-1]){
		ans=o.size();
	}else {
		long long int w;
		int r;
		r=e[e.size()-1];
		w=(long long int)r;
		bool f=1;
		for(int i=0;i<o.size();i++){
			if(w<o[i]){
				f=0;
				break;
			}
			w+=o[i];
		}
		if(f)ans=o.size();
		else ans=o.size()+1;
	}
	
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
