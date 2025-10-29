#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	int ans=0,a,u,v,p1,p2,b;
	cin>>n;
	for(int i=1;i<=n/2;i++){
		cout<<"? "<<i*2-1<<" "<<i*2<<endl;
		cin>>a;
		if(a){
			u=i*2-1;
			v=i*2;
		}
		ans+=a;
	}
	if(n%2){
		cout<<"? "<<n-1<<" "<<n<<endl;
		cin>>a;
		ans+=a;
		if(a){
			u=n-1;
			v=n;
		}
	}
	if(ans==0){
		cout<<"! 1"<<endl;
	}else{
		int q=0;
		for(int i=1;i<=n;i++){
			if(i!=u&&i!=v)p1=i;
		}
		for(int i=1;i<=n;i++){
			if(i!=u&&i!=v&&i!=p1)p2=i;
		}
		cout<<"? "<<u<<" "<<p1<<endl;
		cin>>a;
		q+=a;
		cout<<"? "<<v<<" "<<p1<<endl;
		cin>>b;
		q+=b;
		if(q==0){
			cout<<"! 1"<<endl;
			return;
		}else{
			if(a){
				int w;
				cout<<"? "<<u<<" "<<p2<<endl;
				cin>>w;
				if(w){
					cout<<"! 2"<<endl;
				}else cout<<"! 1"<<endl;
				return;
			}else{
				int w;
				cout<<"? "<<v<<" "<<p2<<endl;
				cin>>w;
				if(w){
					cout<<"! 2"<<endl;
				}else cout<<"! 1"<<endl;
				return;
			}
		}
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
