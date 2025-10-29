#include<bits/stdc++.h>
using namespace std;
int arr[35];
int ans[35];
void solve(){
	int n,k;
	for(int i=0;i<33;i++){
		arr[i]=0;
	}
	cin>>n>>k;
	vector<int>v;
	for(int i=n;i>=1;i--){
		if(k>=i){
			arr[i]=1;
			k-=i;
		}
	}
	int sum=0;
	int nex=1000;
	for(int i=n;i>=1;i--){
		if(arr[i])ans[i]=nex;
		else if(!arr[i]&&arr[i-1]) {
			nex/=2;
			ans[i]=-nex-1;
		}else ans[i]=-1;
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
