#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int q;
	cin>>q;
	int w=min(arr[0],q-arr[0]),f=1;
	for(int i=1;i<n;i++){
		if((arr[i]<w)&&(q-arr[i]<w)){
			f=0;
			break;
		}else{
			if(arr[i]<w)w=q-arr[i];
			else if((q-arr[i]<w))w=arr[i];
			else w=min(arr[i],q-arr[i]);
		}
	}
	if(f)cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
	
}
