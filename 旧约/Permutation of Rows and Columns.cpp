#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n, m, i, j;
	cin>>n>>m;
	vector<vector<int>>v(m);
	vector<vector<int>>v2(n),v3(n);
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			int x;
			cin>>x;
			v[j].push_back(x);
			v2[i].push_back(x);
		}
	}
	vector<vector<int>>v1(m);
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			int x;
			cin>>x;
			v1[j].push_back(x);
			v3[i].push_back(x);
		}
	}
	for(i=0; i<n; i++) {
		sort(begin(v2[i]),end(v2[i]));
		sort(begin(v3[i]),end(v3[i]));
	}
	for(i=0; i<m; i++) {
		sort(begin(v[i]),end(v[i]));
		sort(begin(v1[i]),end(v1[i]));
	}
	sort(begin(v),end(v));
	sort(begin(v1),end(v1));
	sort(begin(v2),end(v2));
	sort(begin(v3),end(v3));
	int flg = 1;
	for(i=0; i<m; i++) {
		if(v[i]!=v1[i]) {
			flg=0;
			break;
		}
	}
	for(i=0; i<n; i++) {
		if(v2[i]!=v3[i]) {
			flg=0;
			break;
		}
	}
	if(flg) {
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}

}
int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
