#include<bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;
pii arr[100005];


void solve(){
	int m,n;
	bool f=0;
	cin>>m>>n;
	arr[0].first=0;arr[0].second=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i].first>>arr[i].second;
	}
	sort(arr+1,arr+n+1);
	for(int i=1;i<=n;i++){
		if((arr[i].first-arr[i-1].first-1>=arr[i].second)||(arr[i].first-arr[i-1].first==arr[i].second-arr[i-1].second)){
			continue;
		}else {
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
	return ;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin>>t;
	while(t--)solve();
} 
