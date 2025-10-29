#include<bits/stdc++.h>
using namespace std;

int arr[500005],mn[500005],c[500005],ans[500005];
bool cmp(int a,int b){
	return arr[a]>arr[b];
}
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}mn[n+1]=1e9;
	for(int i=n;i>=1;i--){
		c[i]=i,mn[i]=min(mn[i+1],arr[i]);
	}

	sort(c+1,c+n+1,cmp);
	
	int id=c[1];
	for(int i=c[1];i<=n;i++)ans[i]=arr[id];
	for(int i=2;i<=n;i++){
		if(c[i]>id)continue;
		if(arr[c[i]]>mn[id])ans[c[i]]=ans[id];
		else ans[c[i]]=arr[c[i]];
		for(int j=c[i];j<id;j++)ans[j]=ans[c[i]];
		id=c[i];
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
