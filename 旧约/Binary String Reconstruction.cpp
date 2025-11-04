#include<bits/stdc++.h>
using namespace std;
int arr[1000];
void solve() {
	for(int i=0; i<=999; i++)arr[i]=0;
	int a,b,c;
	cin>>a>>b>>c;
	if(b==0) {
		if(a) {
			for(int i=0; i<=a; i++) {
				cout<<0;
			}
		} else {
			for(int i=0; i<=c; i++) {
				cout<<1;
			}
		}
		cout<<endl;
		return;
	}
	for(int i=0; i<=a; i++) {
		cout<<0;
	}

	for(int i=0; i<=c; i++) {
		cout<<1;
	}
	
	for(int i=1; i<=b-1; i++) {
		if(i%2==0)cout<<1;
		else cout<<0;
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
