#include<bits/stdc++.h>
using namespace std;
#define int long long 
int arr[200005];
int z[200005];
void solve(){
	int n,k,ans=0;
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>arr[i];
		if(arr[i]>=n-1)arr[i]=n-1;
		
	}
	sort(arr+1,arr+k+1);
	for(int i=1;i<=k;i++){
		z[i]=z[i-1]+arr[i];
//		cout<<arr[i]<<" " ;
//		cout<<arr[i]<<" ";
	}
//	cout<<endl;
	for(int i=k;i>0;i--){
		if(arr[i]==n){
			ans+=z[i-1];
	//		cout<<ans<<endl;
		}else{
			int r=1,l=i;int q=k+1;
			while(r<=l){
				int m=(r+l)/2;
				if(arr[m]>=n-arr[i]){
					l=m-1;
					q=m;
				}
				else r=m+1;
			}
	//		cout<<q<<endl;
			if(q>=i)break;
//			cout<<i<<"!"<<(n-arr[i])<<" "<<(i-q)<<endl;
	//		cout<<z[i-1]-z[q-1]<<" "<<(n-arr[i])*(i-q)<<endl;
			ans+=z[i-1]-z[q-1]-(n-arr[i]-1)*(i-q);
//			cout<<ans<<endl;
		}
	}
	cout<<ans*2<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
