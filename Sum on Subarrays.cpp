#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x;
	cin>>n>>x;
	int num=0;
	while(num<n){
		for(int i=1;i<=n;i++){
			if((1+i)*i/2>=x){
				for(int j=0;j<i-1;j++){
					cout<<1<<" ";
					
				}
				num+=i-1;
					break;
			}
		}
		if(num<n){
			cout<<-1000<<" ";	
			num++;
		}
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
