#include<bits/stdc++.h>
using namespace std;
int arr[110];
int pd(int i){
	int j=1;
	while(j*j<i){
		j++;
	}
	if(j*j==i&&j%2==1){
		return 1;
	}
	else return 0;
}
void solve(){
	int n;
	cin>>n;
	int ans=0;
	int sum=0;
	for(int i=0;i<n;i++){
		int q;
		cin>>q;
		sum+=q;
		ans+=pd(sum);
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	

	while(t--)solve();
}
