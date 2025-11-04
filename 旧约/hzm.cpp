#include<bits/stdc++.h>
using namespace std;
 int a[300000];
void solve(){
	int n,m;
	int mn=1e9;
	cin>>n;
	double sum1=0,sum2=0,sum3=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum1+=a[i];
	}
	sum1/=n;
	for(int i=1;i<=n;i++){
		if(a[i]<mn){
			mn=a[i];
			m=i;
		}
	}
	for(int i=1;i<=m+1;i++){
		sum2+=a[i];
	}
	sum2/=m+1;
	for(int i=m-1;i<=n;i++){
		sum3+=a[i];
	}
	sum3/=n-(m-1)+1;
	printf("%.9lf\n",max(max(sum1,sum2),sum3));
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
