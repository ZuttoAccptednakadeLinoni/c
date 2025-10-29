#include<bits/stdc++.h>
using namespace std;

vector<int> arr[1000005];

int main(){
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		arr[i](m);
		for(int j=1;j<=m;j++){
			cin>>arr[i][j];
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int ans=0;
			for(int q=1;q<=n;q++){
				for(int w=1;w<=m;w++){
					if(q==i&&w==j)continue;
					else ans+=max(abs(i-q),abs(j-w))*arr[i][j];
				}
			}
			if(j==1)cout<<ans;
			else cout<<" "<<ans;
		}
		cout<<endl;
	}
}
