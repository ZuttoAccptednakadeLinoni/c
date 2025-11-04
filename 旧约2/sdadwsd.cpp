#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[55],t; 
signed main(){
	cin>>t;
	while(t--){
		cin>>n;
		int ans=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			ans+=a[i];//至少有所有元素的和 
		}
		if(n==1){ //注意特判，因为只有一个会保持当前的和 
			cout<<ans<<endl;
			continue;
		}
		for(int i=1;i<n;i++){//枚举操作二的次数 
			int s=0;
			for(int j=1;j<=n-i;j++){//进行差分操作并求和 
				a[j]-=a[j+1];
				s+=a[j]; 
			}
			ans=max(ans,max(s,-s));//由于操作一会使和成为相反数，取较大值 
		}
		cout<<ans<<endl; 
	}	
	return 0;
}
