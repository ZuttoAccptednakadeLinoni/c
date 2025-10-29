#include<bits/stdc++.h>
using namespace std;
long long arr[12]={9,99,999,9999,99999,999999,9999999,99999999,999999999};
void solve(){
	long long n;
	cin>>n;
	int ans=7;
	long long q=n;
	while(q>0){
		if(q%10==7){
			cout<<0<<endl;
			return ;
		}else{
			q/=10;
		}
	}
	for(int i=0;i<9;i++){
		q=n;int f=0;
		for(int j=0;j<7;j++){
			q+=arr[i];
			if(f)break;
			long long w=q;
			while(w>0){
				if(w%10==7){
					ans=min(j+1,ans);
					f=1;
					break;
				}else{
					w/=10;
				}
			}
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
