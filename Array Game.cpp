#include<bits/stdc++.h>
#define int long long 
using namespace std;
int arr[2005];
void solve(){
	//cout<<"!!";
	int n,k;
	cin>>n>>k;
	int ans=1e18;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		ans=min(arr[i],ans);
	}
	if(k>=3){
		cout<<"0\n";
		return; 
	}
	else if(k==2){
		sort(arr,arr+n);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
			//	cout<<i<<endl; 
				int q=abs(arr[j]-arr[i]);
				ans=min(ans,q);
				int r=0,l=n-1,w,m;
				while(r<=l){
					m=(r+l)/2;
					ans=min(ans,abs(q-arr[m])) ;
					if(arr[m]>=q){
						l=m-1;
						w=m;
					}else r=m+1;
				}

			//	cout<<ans<<endl;
			}
		}
	}else if(k==1){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int q=abs(arr[j]-arr[i]);
			//	cout<<q<<endl;
				ans=min(ans,q);
			//	cout<<ans<<endl;
			}
		}
	}
	cout<<ans<<endl;

}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
