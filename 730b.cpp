#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>b){
		int q;
		q=a;
		a=b;
		b=q;
	}
	if(a==1&&b==2){
			cout<<"Yes\n";
			return;
	}
	if(c+d==0){
		cout<<"No\n";
		return;
	}else if(c+d==2){
		if(a%2+b%2==2)cout<<"No\n";
		else cout<<"Yes\n";
	}else if(c==0){
		if((a%2==0&&b%3==0)||a%3==0&&b%2==0){
			cout<<"Yes\n";
			return;
		}
		if(a==2){
			cout<<"Yes\n";
			return ;
		}
		cout<<"No\n";
	}else if(d==0){
		if(a==1&&b%2==0){
			cout<<"Yes\n";
		}else {
			cout<<"No\n";
		}
		return ;
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
