#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[65];
int fj[65];
void solve(){
	int a,b;
	cin>>a>>b;
	int sum=0;
	int f=-1;
//	int ans=0;
//	int s=0;
	int q=b;
	for(int i=39;i>=0;i--)fj[i]=0;
	for(int i=39;i>=0;i--){
		if(q>=2*arr[i]){
			fj[i]=2;
			q-=2*arr[i];
			if(f==-1)f=i;
		}
		else if(q>=1*arr[i]){
			fj[i]=1;
			q-=arr[i];
			if(f==-1)f=i;
		}
	//	cout<<fj[i];
		
	}//cout<<endl;
	int w=b;q=0;
	for(int i=f;i>=0;i--)q+=fj[i]+1;
	int ans=q;
	//cout<<ans<<endl;
	for(int i=1;i<=f;i++){
		q-=fj[i-1]+1;
		w-=fj[i-1]*arr[i-1];
		sum+=arr[i-1]*2;
		if(fj[i]>0){
		//	cout<<w-arr[i]+sum<<" "<<q;
		if(i==f&&fj[i]==1){
			if(w-arr[i]+sum<=b&&w-arr[i]+sum>=a){
				ans=max(q-2+3*(i),ans);
			}
		}else if(w-arr[i]+sum<=b&&w-arr[i]+sum>=a){
				ans=max(q-1+3*(i),ans);
			}
			
		}	
		//cout<<ans<<endl;
	}
	cout<<ans<<endl;
}

signed main(){
	int t;
	cin>>t;
	arr[0]=1;
	for(int i=1;i<64;i++){
		arr[i]=arr[i-1]*3;
	//	cout<<i<<" "<<arr[i]<<endl;
	}
	while(t--)solve();
}
