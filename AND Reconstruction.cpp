#include<bits/stdc++.h>
using namespace std;
int arr[100005][30];
int ans[100005][30];
void solve(){
	int n;
	long long int a;
	cin>>n;
	bool f=1;
	for(int i=1;i<=n-1;i++){
		cin>>a;
		for(int j=0;j<30;j++){
			arr[i][j]==0;
			arr[i][j]=((a>>j)&1);
			ans[i][j]=arr[i][j];
		}
	}
	for(int j=0;j<30;j++){
			ans[n][j]=arr[n-1][j];
			arr[n][j]=0;
			arr[n+1][j]=0;
		}
	for(int i=1;i<=n-1;i++){
		for(int j=0;j<30;j++){
			if(arr[i][j]){
				if(arr[i+1][j]==0&&arr[i+2][j]==1)f=0;
				else ans[i+1][j]=1;
			}
		}
	}
	if(!f){
		cout<<-1<<endl;
		return;
	}else{
		for(int i=1;i<=n;i++){
			long long int as=0;
			for(int j=0;j<30;j++){
				as+=(ans[i][j]<<j);
				
			}
			cout<<as<<" ";
		}
	}
	cout<<endl;
	return;
}
/*
4
33718400 570558532 706787328
14
20971520 710151168 181666336 4468737 67178496 1121848 34872344 108272664 68225032 202442752 672138816 679482368 142614528
*/

int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<10000-t<<" O.O \n";
		solve();
		
	}
}
