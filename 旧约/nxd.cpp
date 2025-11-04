#include<bits/stdc++.h>
using namespace std;
long long n,a[500010],b[500010];
long long ans;

void merge(int l,int r) {
	if(l>=r)return;
	int mid=(l+r)>>1;
	merge(l,mid);
	merge(mid+1,r);

	int i=l,j=mid+1,k=l;
	while(i<=mid&&j<=r) {
		if(a[i]<=a[j])b[k++]=a[i++];
		else b[k++]=a[j++],ans+=mid-i+1;

	}
	while(i<=mid)b[k++]=a[i++];
	while(j<=r)b[k++]=a[j++];
	for(i=l; i<=r; i++)a[i]=b[i];
}

int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	merge(1,n);
	printf("%lld",ans);
}
