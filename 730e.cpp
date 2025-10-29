#include<bits/stdc++.h>
using namespace std;

int a[100005],b[100005];
void solve(){
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	bool f=0;
	
	for(int i=1;i<=n;i++){
		if(a[i]==b[i]){
			if(f==0){
				ans++;
				f=1;
			}else{
				f=0;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]>b[i])ans++;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
