#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[500005];
void solve(){
	int n;
	cin>>n;
	int f=0;
	int s=sqrt(n*(n+1)/2);
	if(s*s==n*(n+1)/2)f=1;
	if(f)cout<<-1;
	else{
		for(int i=1;i<=n;i++){
			cout<<arr[i]<<" ";
		}
	}

	cout<<endl;
}

signed main(){
	int t;
	cin>>t;
	for(int i=0;i<500005;i++){

		arr[i]=i;
	}
	for(int i=1;i<500005;i++){

		int s=(int)sqrt(i*(i+1)/2);
		if(s*s==i*(i+1)/2)swap(arr[i],arr[i+1]);
	}
	while(t--)solve();
}
