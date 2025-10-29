#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,q,ma=0;
	cin>>n;
	map<int,int>m;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>q;
		if(m[q]==0)v.push_back(q);
		m[q]++;
		ma=max(ma,q);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	int i=v.size(),num=1;
	while(i<n){
		if(!m[num]){
			cout<<num<<" ";
			i++;
		}
		num++;
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
