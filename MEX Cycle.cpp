#include<bits/stdc++.h>
using namespace std;
int arr[200005];

void solve(){
	int n,x,y;
	cin>>n>>x>>y;
	if(n&1){
		for(int i=2;i<=n;i+=2){
			arr[i-1]=0;
			arr[i]=1;
		}
		arr[n]=2;
		if(arr[x]==0&&arr[y]==0){
				if(x==n-1||x==1)swap(arr[x],arr[n]);
				else arr[x]=2;
		}
		if(arr[x]==1&&arr[y]==1){
				if(x==n-1||x==1)swap(arr[x],arr[n]);
				else arr[x]=2;
		}
	}else{
		for(int i=2;i<=n;i+=2){
			arr[i-1]=0;
			arr[i]=1;
		}
		if(arr[x]==0&&arr[y]==0){
			arr[x]=2;
		}
		if(arr[x]==1&&arr[y]==1){
			arr[x]=2;
		}
	}
	for(int i = 1; i <= n; i ++) cout << arr[i] << " ";
    cout << "\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
