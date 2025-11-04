#include<bits/stdc++.h>
using namespace std;
char a[200005],b[200005];
char c[200];
bool cmp(char a, char b) {
    return a - 'a' < b - 'a';
}
int main(){
	string s,q;
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		m=unique(a,a+n)-a;
		for(int i=0;i<m;i++){
			c[a[i]]=a[m-1-i];
		}
		for(int i=0;i<n;i++){
			cout<<c[b[i]];
		}
		cout<<endl;
	}
}
