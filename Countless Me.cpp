#include<bits/stdc++.h>
using namespace std;
long long int ans=0;
int a[200005],b[50];
int main() {
	long long int n;
	long long int sum=0;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		sum+=a[i];
	}
	for(int i=48; i>=1; i--) {
		long long int tag=0;
		if(sum%(((1ll<<i)-1)))tag++;
		long long int q=sum/((1ll<<i)-1)+tag;
		if(q>n) {
			b[i]++;
			sum=sum-(min(n*(1ll<<i),(sum/(1ll<<i) )*(1ll<<i)));
		}
	}

	for(int i=48; i>=0; i--) {
		if(b[i]) {
			for(i; i>=0; i--) {
				if(b[i])ans=ans*2+1;
				else ans=ans*2;
			}
			break;
		}
	}
	if(sum!=0)ans++;
	cout<<ans;
}
