#include<bits/stdc++.h>
using namespace std;
int arr[200005],arrb[200005];
void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<m;i++){
		cin>>arrb[i];
	}
	sort(arrb,arrb+m);
	int w=min(arr[0],arrb[0]-arr[0]),f=1;

	for(int i=1;i<n;i++){
			int q=0,p=m-1,e;
			while(q<=p){
				e=(q+p)/2;
				if(arrb[e]<w+arr[i])q=e+1;
				else p=e-1;
			}

			if(q==m){
				if(arr[i]<w)f=0;
				else w=arr[i];
			}
			else {
				if(arr[i]<w)w=arrb[q]-arr[i];
				else if((arrb[q]-arr[i]<w))w=arr[i];
				else w=min(arr[i],arrb[q]-arr[i]);
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
