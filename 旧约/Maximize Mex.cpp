#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	for(int i=0;i<=200000;i++)arr[i]=0;
	int n,x;
	cin>>n>>x;
	int q;
	for(int i=0;i<n;i++){
		cin>>q;
		if(q<=n)arr[q]++;
	}
	for(int i=0;i<=n;i++){
		if(arr[i]==0){
			cout<<i<<endl;
			return;
		}else if(arr[i]>1){
			if(i+x<=n)arr[i+x]+=arr[i]-1;
			arr[i]=1;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
