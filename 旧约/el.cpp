#include<bits/stdc++.h>
using namespace std;
int a[200005],n,c;
long long b[2000005];
int ans(int i,int max,int maxn) {
	int h=a[i];
	if(i<maxn) {
		if(h+b[i-1]>=max)return i-1;
		else return i;
	} else if(i==maxn)return 0;
	else if(i>maxn)return i-1;

}
void solve() {
	memset(b,200005,0);
	int max=0,maxn=1;
	cin>>n>>c;
	cin>>a[1];
	a[1]+=c;
	b[1]=a[1];
	max=a[1];
	for(int i=2; i<=n; i++) {
		cin>>a[i];
		b[i]=b[i-1]+a[i];
		if(a[i]>max) {
			max=a[i];
			maxn=i;
		}
	}
	
	for(int i=1; i<=n; i++) {
		cout<<ans(i,max,maxn)<<" ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
