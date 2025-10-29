#include<bits/stdc++.h>
using namespace std;

int a[10005],b[10005];
int main(){
	int l,m,q,w;
	cin>>l>>m;
	for(int i=0;i<m;i++){
		cin>>q>>w;
		a[q]--;
		a[w+1]++;
	}
	int sum=0,ans=0;
	for(int i=0;i<=l;i++){
		sum=sum+a[i];
		if(sum==0)ans++;
	}
	cout<<ans;
}
