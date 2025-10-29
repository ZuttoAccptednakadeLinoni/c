#include<bits/stdc++.h>
using namespace std;
int mm[300005],kk[300005];
void solve(){
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		cin>>mm[i];
	}
	for(int i=0;i<k;i++){
		cin>>kk[i];
	}
	int key=n;
	if(k==n)for(int i=0;i<m;i++)cout<<1;
	else if(k<n-1)for(int i=0;i<m;i++)cout<<0;
	else if(k==n-1){
		sort(kk,kk+k);
		for(int i=1;i<=k;i++){
			if(kk[i-1]!=i){
				key=i;break;
				
			}
			
		}
		for(int i=0;i<m;i++){
			if(mm[i]==key)cout<<1;
			else cout<<0;
		}
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
