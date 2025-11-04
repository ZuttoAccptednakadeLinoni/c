#include<bits/stdc++.h>
using namespace std;
long long arrx[100005],arry[100005];
void solve(){
	int n;
	cin>>n;
	long long x,y;
	for(int i=0;i<n;i++){
		cin>>arrx[i]>>arry[i];
	}
	long long q,w,e,r;
	long long ans,s;
	cin>>q>>w>>e>>r;
	ans=(q-e)*(q-e)+(w-r)*(w-r);
	for(int i=0;i<n;i++){
		s=(arrx[i]-e)*(arrx[i]-e)+(arry[i]-r)*(arry[i]-r);
		if(s<=ans){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
