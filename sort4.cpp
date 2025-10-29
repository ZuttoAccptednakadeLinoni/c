#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int s[100005];
int p[100005];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		p[i]=s[i];
	}
	sort(s+1,s+n+1);
	for(int i=1;i<=n;i++){
		arr[s[i]]=i;
	}
	for(int i=1;i<=n;i++){
		cout<<s[i]<<" !"<<arr[s[i]]<<" ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
