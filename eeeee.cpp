#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long a;
	scanf("%lld",&a);
	if(a==1){
		cout<<-1<<endl;
		return ;
	}
	if(a%2==0){
		for(int i=0;i<=50;i++){
			if((1ll<<i)>=a){
				cout<<-1<<endl;
				return;
			}
			if(a>>i&1){
				a=a-(1ll<<i);
				printf("%lld\n",a);
				return;
			}
			
		}
	}
	else printf("%lld\n",a-1);
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
