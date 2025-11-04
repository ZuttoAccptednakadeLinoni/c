#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,q,w;
	cin>>n>>q;
	map<int,int>m;
	for(int i=0;i<n;i++){
		cin>>w;
		m.insert(pair<int,int>(w,1));
	}
	for(int i=0;i<q;i++){
		cin>>w;
		if(m.find(w)==m.end())cout<<"NO\n";
		else cout<<"YES\n";
	}
}
