#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,q,num=0;string w;
	cin>>n>>q;
	map<long long,int>m;
	long long hx=0;
	cin>>w;
	for(int i=0;i<n;i++){
		hx=0;
		for(int j=i;j<n;j++){
			hx=hx*13331ll+(long long)w[j];
			m.insert(pair<long long,int>(hx,1));
		}
	}
	for(int i=0;i<q;i++){
		hx=0;
		cin>>w;
		for(int j=0;j<(int)w.size();j++){
			hx=hx*13331ll+(long long)w[j];
		}
		if(m.find(hx)==m.end())cout<<"NO\n";
		else cout<<"YES\n";
	}
}

