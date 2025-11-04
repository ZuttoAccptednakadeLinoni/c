#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int q=0;q<n-1;q++){
		int i=q+1,j=n-1;
		while(i<=j){
			int m=(i+j)/2;
			if(arr[m]*arr[q]==n-2){
				
			cout<<arr[m]<<" "<<arr[q]<<endl;
			return;
			}
			else if(arr[m]*arr[q]<n-2)i=m+1;
			else j=m-1;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
