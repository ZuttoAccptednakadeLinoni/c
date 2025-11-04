#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	int t,q,n,ans=0;
	cin>>t;
	while(t--){
		ans=0;
		memset(a,0,sizeof(a));
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>q;
			a[q]++;
			if(a[q]==2)ans++;
			
		}
		cout<<ans<<endl;
		
	}
}
