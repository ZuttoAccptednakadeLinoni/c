#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define pp pair<int,int>
vector<int>v[400005];
int hhh[400005];
bool cmp(pp a,pp b){
	if(a.first!=b.first)return a.first<=b.first;
	else return hhh[a.second]<hhh[b.second];
}
void solve(){
	
	int n,m,k;
	vector<pp>vp;
	cin>>n>>m>>k;
	vp.clear();
	for(int i=0;i<n;i++){
		int q;
		cin>>q;
		vp.push_back({q,i});
		v[i].clear();v[i].reserve(m);
		int hh=0;
		for(int j=0;j<m;j++){
		//	int q;
			cin>>q;
			v[i][j]=q;
			if(q!=-1)hh+=q;
		}
		hhh[i]=hh;
	}
	sort(vp.begin(),vp.end(),cmp);
	
	int sum=-1;
//	int fis=1;
	int lssc=vp[0].first;int sm;
	for(auto au:vp){
		int id=au.second;
	//	cout<<"id"<<id<<endl;
		
		if(lssc!=au.first)sum=sm;
		lssc=au.first;
		//cout<<sum<<" "<<sm<<endl;
		sm=0;
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
		if(sm+(int)f.size()*k<=sum){
			cout<<"No\n";
			return;
		}
		int w;
		
		if(sm<=sum){
			w=sum-sm+1;
			
		}else{
			w=0;
			//if(lssc!=au.first)sum=sm;
		}
		for(auto ff:f){
		//	cout<<sum<<" ";
			v[id][ff]=min(k,w);
			sm+=v[id][ff];
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
