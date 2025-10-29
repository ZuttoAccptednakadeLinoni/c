#include<bits/stdc++.h>
using namespace std;
int a[105];

int main() {
	int n;
	cin>>n;
	for(int i=0; i<=n; i++) {
		cin>>a[i];
	}
	if(n==0){
		cout<<a[0];
		return 0;
	}
	for(int i=0; i<=n; i++) {
		if(a[i]==0)continue;
		else {
			if(a[i]==1)cout<<'x'<<'^'<<n-i;
			else if(a[i]==-1)cout<<"-x^"<<n-i;
			else cout<<a[i]<<'x'<<'^'<<n-i;
			i++;
			for(i; i<n-1; i++) {
				if(a[i]!=0) {
					if(a[i]>0)cout<<"+";
					if(a[i]==1)cout<<'x'<<'^'<<n-i;
					else if(a[i]==-1)cout<<"-x^"<<n-i;
					else cout<<a[i]<<'x'<<'^'<<n-i;
				}

			}
			if(a[i]==0){
			}
			else if(a[i]==1)cout<<"+x";
			else if(a[i]==-1)cout<<"-x";
			else if (a[i]>0) cout<<'+'<<a[i]<<'x';
			else cout<<a[i]<<'x';
			if(a[n]>0)cout<<'+'<<a[n];
			else if(a[n]<0)cout<<a[n];
			break;
		}
	}

}
