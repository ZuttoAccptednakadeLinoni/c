#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pp pair<int,int>
vector<int>v[400005];

void solve(){
	
	int n,m,k;
	vector<pp>vp;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		int q;
		cin>>q;
		vp.push_back({q,i});
		v[i].clear();
		for(int j=0;j<m;j++){
		//	int q;
			cin>>q;
			v[i].push_back(q);
		}
	}
	sort(vp.begin(),vp.end());
	int sum=-1;
	int fis=1;
	for(auto au:vp){
		int id=au.second;
	//	cout<<"id"<<id<<endl;
		int sm=0;
		int nu=0;
		vector<int>f;
		f.clear();
		for(int i=0;i<m;i++){
			if(v[id][i]!=-1)sm+=v[id][i];
			else {
				f.push_back(i);
			}
		}
	//	cout<<"sm"<<sm<<" "<<sum<<endl;
		if(sm+f.size()*k<=sum){
			cout<<"No\n";
			return;
		}
		int w;
		
		if(sm<=sum){
			w=sum-sm+1;
			sum++;
		}else{
			w=0;
			sum=sm;
		}
		for(auto ff:f){
		//	cout<<sum<<" ";
			v[id][ff]=min(k,w);
		//	sum+=v[id][ff];
		//	cout<<v[id][ff]<<" "<<sum<<endl;
			w-=v[id][ff];
		}
	//	for(auto dd:v[id])cout<<dd<<" ";
	//	cout<<sum<<" sum"<<endl;
	//	cout<<endl;
	}
	cout<<"Yes\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
/*
5
3 4 5
5 1 3-1-1
2-1 5-1 5
3 3-1-1 4
2 3 10
10000 5 0 -1
1 10 10 10
2 3 10
10 1 2 3
100 4 5 6
2 3 10
100 1 2 3
10 4 5 6
2 3 10000
100 -1 -1 -1
1 -1 -1 -1
*/
signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
