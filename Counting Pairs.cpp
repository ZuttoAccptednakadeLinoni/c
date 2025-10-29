#include<bits/stdc++.h>
using namespace std;
long long arr[200005];
void solve(){
	long long  n,x,y;
	cin>>n>>x>>y;
	long long  sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+n);
	int ans=0;
	int add;
	for(int q=0;q<n;q++){
		int i=q,j=n-1,m;
		while(i<=j){
			m=(i+j)/2;
			if(arr[m]+arr[i]<=sum-x)i=m+1;
			else j=m-1;
		}
		if(j<q)continue;
		add=j;
		
		i=q,j=n-1,m;
		while(i<=j){
			m=(i+j)/2;
			if(arr[m]+arr[i]<=sum-y)i=m+1;
			else j=m-1;
		}
		if(j>n)continue;
		add-=j;
		ans+=add;
		cout<<"q"<<q<<"add"<<add<<endl;
	}
	cout<<ans<<endl;;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
