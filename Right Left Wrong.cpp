#include<bits/stdc++.h>
using namespace std;
long long int arr[200005];
char c[200005];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	bool f=0;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	int l=1,r=n;
	long long int ans=0;
	while(l<r){
		if(c[l]!='L')l++;
		else {
			if(c[r]!='R')r--;
			else{
				ans+=arr[r]-arr[l-1];
				l++;
				r--;
			}
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
