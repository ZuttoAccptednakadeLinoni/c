#include<bits/stdc++.h>
using namespace std;

struct edge{
	int v,w;
};

int main(){
	int n,m,k,a,b,c;
	vector<int>vi[10005];
	cin>>n>>m>>k;
	cin>>s>>t;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		vi[a].push_back({b,c});
		for(int j=1;j<k;j++){
			vi[a+(j-1)*n].push_back({b+j*n,0});
		}
	}
	
}
