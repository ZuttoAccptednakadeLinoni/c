#include<bits/stdc++.h>
using namespace std;

#define pp pair<int,int>
ofstream fout("2.out");
void solve(){

	int n,m;
	
	cin>>n>>m;
	vector<vector<int> > v(n);
	map<int,pp>p;
	p.clear();
	for(int i=0;i<n;i++){
		v[i].resize(m);
		for(int j=0;j<m;j++){
			cin>>v[i][j];
			p[v[i][j]]={i,j};
		}
	}
	int ans=0;
	vector<pp>a;
	a.clear();
	for(int i=0;i<n+m-1;i++){
		a.push_back(p[i]);
	}
	sort(a.begin(),a.end());
	int i=0,j=n+m-1;
	while(i<=j){
		int r=(i+j)/2,f=1;
		int l=0,w=0;
		for(int q=0;q<n+m-1;q++){
			if(v[a[q].first][a[q].second]<r){
				if(a[q].first>=l&&a[q].second>=w){
					l=a[q].first;w=a[q].second;
				}
				else{
					f=0;
					break;
					
				}
			}
		}
		if(f){
			i=r+1;
			ans=r;
		}
		else j=r-1;
	}
	fout<<ans<<endl;
/*	for(int i=0;i<n+m-1;i++){
		for(int j=0;j<a.size();j++){
			if((p[i].first<=a[j].first&&p[i].second<=a[j].second)){
				continue;
		}else if((p[i].first>=a[j].first&&p[i].second>=a[j].second)){
			continue;
		}else {
			cout<<a.size()<<endl;
			return;
		}
		
		}
		a.push_back(p[i]);
	}
	cout<<a.size()<<endl;
*/

}

int main(){

	int t;
	cin>>t;
	while(t--)solve();
	fout.close();
}
