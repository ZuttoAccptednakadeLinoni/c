#include<bits/stdc++.h>
using namespace std;
vector<int> a[105];
int in[105];

int main(){
	int n,q,w;
	cin>>n;
	for(int i=1;i<=n;i++){
		while(cin>>q&&q){
			a[i].push_back(q);
			in[q]++;
		}
	}
	vector<int> l;
	queue<int> s;
	for(int i=1;i<=n;i++){
		if(in[i]==0)s.push(i);
		while(!s.empty()){
			int u=s.front();
			s.pop();
			l.push_back(u);
			for(auto v:a[u]){
				if(--in[v]==0){
					s.push(v);
				}
			}
		}
		if(l.size()==n){
			for(auto i:l)cout<<i<<' ';
			return 0;
		}
	}
	
}
