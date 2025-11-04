#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int>arr[200005];

int main(){
	int n,m,t,q,ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>t;
		for(int j=0;j<t;j++){
			cin>>q;
			arr[i][q]++;
		}
	}
	cin>>m;
	for(int i=0;i<m;i++){
		ans=0;
		cin>>t>>q;
		for(int j=0;j<n;j++){
			if(arr[j][t]&&arr[j][q])ans++;
		}
		cout<<ans<<endl;
	}
} 
