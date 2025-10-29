#include<bits/stdc++.h>
using namespace std;
int in[2005],l[2005],b[2005],ii[2005],k[2005];
vector<int>a[2005];

int main() {
	int t,n,q,w;
	cin>>t>>n;
	for(int i=0; i<n; i++) {
		memset(ii,0,sizeof(ii));
		cin>>q;

		for(int j=0; j<q; j++) {
			cin>>k[j];
			ii[k[j]]++; 
		}
		for(int g=0; g<q; g++) {
				a[k[g]].push_back(t+i+1);
				in[t+i+1]++;
		}
		for(int j=k[0]+1; j<k[q-1]; j++) {
			if(!ii[j]){
				a[t+i+1].push_back(j);
				in[j]++;
			}
		}
	}
	
	queue<int> s;
	for(int i=1;i<=t+n&&!b[i];i++){
		if(in[i]==0)s.push(i);
		while(!s.empty()){
			int u=s.front();
			s.pop();
			for(auto v:a[u]){
				l[v]=max(l[v],l[u]+1);
				if(--in[v]==0){
					s.push(v);
					b[v]++;
				}
			}
		}
	}
	int ans=0;
	for(int i=1;i<=t;i++){
		ans=max(ans,l[i]);
	}
	cout<<ans/2+1;
}
