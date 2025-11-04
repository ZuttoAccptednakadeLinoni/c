#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int cz[200005];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		cin>>cz[i];
	}
	vector<int>v(n+1);
	int ans=0;
	for(int i=1;i<=n;i++){
		int now=cz[i];

		int next=arr[cz[i]];
//		cout<<now<<" "<<next<<"!"<<endl;
		while(next!=0){
			arr[now]=0;
			now=next;
			next=arr[now];
			ans+=1;
//			cout<<now<<" "<<next<<"!"<<endl;
		}
		cout<<ans<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
