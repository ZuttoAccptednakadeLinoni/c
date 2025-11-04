#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;
	int ans=0;
	int i=0;
	for(i=0;i<min(6,k);i++){
		s=s[n-1]+s;
		ans=0;
	}
	int j=0;
	while(j<n){
			j=s.find("nanjing",j);
			if(j==-1||j>n)break;
			else{
				ans++;j++;
			}
		}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
