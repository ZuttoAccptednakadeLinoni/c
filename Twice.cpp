#include<bits/stdc++.h>
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
	for( auto it = m.begin(); it != m.end(); it++)
    {
        ans+=it->second/2;
    }
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
