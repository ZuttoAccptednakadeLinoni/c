#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int q[100005];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	vector<int>ans;
	q[n]=arr[n];
	for(int i=n-1;i>=1;i--){
		q[i]=min(arr[i],q[i+1]);
	}
	int hmin=INT_MAX-1;
	for(int i=1;i<=n;i++){
		if(q[i]!=arr[i])hmin=min(hmin,arr[i]);
	}
	for(int i=1;i<=n;i++){
		if(q[i]==arr[i]&&arr[i]<=hmin+1)ans.push_back(arr[i]);
		else ans.push_back(arr[i]+1);
	}
	sort(ans.begin(),ans.end());
	for(auto i:ans)cout<<i<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
