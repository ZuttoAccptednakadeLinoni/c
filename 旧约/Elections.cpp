#include<bits/stdc++.h>
using namespace std;
int a[200005],n,c,max,maxn;
int ans(int i) {
	int h=a[i];
	if(i<maxn) {
		for(int j=0; j<i; j++) {
			h+=a[j];
			if(h>max)return j+1;
		}
		return i+2;
	} else if(i==maxn)return 0;
	else if(i>maxn)return 1;

}
void solve() {
	max=0;
	cin>>n>>c;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		if(a[i]>max) {
			max=a[i];
			maxn=i;
		}
	}
	a[0]+=c;
	for(int i=0; i<n; i++) {
		cout<<ans(i);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
