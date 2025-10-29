#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int ka[400005];
void solve(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<=k;i++){
		ka[i]=0;
	}
	for(int i=0;i<n;i++){
		cin>>arr[i];
		ka[arr[i]]++;
	}
	int ans=0;
	for(int i=1;i<=k/2;i++){
		if(ka[i]&&ka[k-i]){
			if(i==k-i){
				ans+=ka[i]/2;
				break;
			}
			ans+=min(ka[i],ka[k-i]);
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
