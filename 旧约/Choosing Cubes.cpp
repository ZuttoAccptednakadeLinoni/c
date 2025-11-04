#include<bits/stdc++.h>
using namespace std;
int a[105];
bool cmp(int a,int b){
	return a>b;
}
void solve(){
	int n,f,k,q;
	cin>>n>>f>>k;
	for(int i=0;i<105;i++)a[i]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==f)q=a[i];
	}
	sort(a+1,a+n+1,cmp);
	if(a[k]<q)cout<<"YES\n";
	else if(a[k]>q)cout<<"NO\n";
	else if(a[k]==q&&a[k+1]!=q)cout<<"YES\n";
	else if(a[k]==q&&a[k+1]==q)cout<<"MAYBE\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
