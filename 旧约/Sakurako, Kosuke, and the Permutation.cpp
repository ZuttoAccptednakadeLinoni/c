#include<bits/stdc++.h>
using namespace std;
int arr[1000005],ans[1000005];

void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		ans[i]=0;
	}
	int q=0,a=0;
	for(int i=1;i<=n;i++){
		if(!ans[i]){
			int w=i;
			int le=0;
			while(ans[w]==0){
				le++;
				ans[w]=1;
				w=arr[w];
			}
			a+=(le-1)/2;
		}
	}
	cout<<a<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
