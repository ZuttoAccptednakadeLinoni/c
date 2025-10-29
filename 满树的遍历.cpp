#include<bits/stdc++.h>
using namespace std;

vector<int>arr[100005];
bool f=1;
int k,w,g;
void dfs(int d){
	w=max(w,(int)arr[d].size());
	if(k!=(int)arr[d].size()&&(int)arr[d].size()!=0)f=0;
	for(auto i:arr[d])dfs(i);
}
void qx(int w){
	if(w==g)cout<<w;
	else cout<<" "<<w;
	for(auto i:arr[w])qx(i);
}
int main(){
	int t,q;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>q;
		if(q==0)g=i;
		arr[q].push_back(i);
	}
	for(int i=0;i<=t;i++){
		sort(arr[i].begin(),arr[i].end());
	}
	k=arr[g].size();
	dfs(g);
	if(f)cout<<w<<" yes\n";
	else cout<<w<<" no\n";
	qx(g);
}
