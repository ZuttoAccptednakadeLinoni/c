#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int sum=0,num=1,ans=0;
	for(int i=n-1;i>=0;i--){
	//	cout<<arr[i]*num<<endl;
		if(arr[i]*num>=k){
			
			ans++;
			num=1;
		}else{
			num++;
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
