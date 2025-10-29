#include<bits/stdc++.h>
using namespace std;
vector<int>arr[100005];
int main(){
	int t,n,m,u,v;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>m;
		int num=0;
		for(int i=0;i<m;i++){
			cin>>u>>v;
			arr[u].push_back(v);
			arr[v].push_back(v);
		}
		for(int i=1;i<=n;i++){
			if(arr[i].size()>=3)
			num++;
		}
		cout<<"YES "<<num<<endl;
	}
	
}
