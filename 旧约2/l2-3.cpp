#include<bits/stdc++.h>
#define pp pair<string,string>
using namespace std;

vector<pp>v;
vector<pp>ans[100005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s,d;
		cin>>s>>d;
		v.push_back({s,d});
	}
	sort(v.begin(),v.end());
	ans[0].push_back(v[0]);
	int m=1;
	for(int i=1;i<v.size();i++){
		int yy=0;
		for(int j=0;j<m;j++){
			int f=1;
			for(int k=0;k<ans[j].size();k++){
				if(v[i].first<ans[j][k].second&&v[i].first>=ans[j][k].first){
					f=0;
					break;
				}
				if(v[i].second<=ans[j][k].second&&v[i].second>ans[j][k].first){
					f=0;
					break;
				}
				
			}if(f){
				ans[j].push_back(v[i]);
				yy=1;
				break;
			}
		}
		if(!yy){
			ans[m].push_back(v[i]);
			m++;
		//	cout<<i<<" "<<m<<endl;
			
		}
	}
	cout<<m;
	
}
