#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
void solve(){
	int n;
	cin>>n;
	int z=1,m=1,f=1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==-1)m--;
		else z++,m++;
		if(m<=0){
			f=0;
		}
	}
	if(f==0){
		cout<<-1<<endl;
		return;
	}
		for(int i=n-1;i>0;i--){
			if(arr[i]==0){
				
				if(m>2){
					m-=2;
					z--;
				}
			}
		}
		cout<<z/__gcd(z,m)<<" "<<m/__gcd(z,m)<<endl;

	
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
