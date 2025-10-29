#include<bits/stdc++.h>
using namespace std;


vector<int> vv[1000005];
int main(){
	int u,v,n,m,qe,j;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>u>>v;
		vv[u].push_back(v);
	}

	cout<<"@@@";
	for(int i=1;i<=n;i++){
		qe=n;
		j=i;
		cout<<qe<<"@"<<j<<endl;
		while(qe!=j){
			int maxm=0;
			for(int q=0;q<=vv[j].size();q++){
				cout<<vv[j][q]<<" "<<j+q+1<<endl;
				if(vv[j][q]!=j+q+1){
					maxm=vv[j][q];
					break;
				}
				cout<<"maxm"<<maxm;
			}
			
			qe=min(qe,maxm);
			j++;
		}
		cout<<qe<<endl;
	}
}
