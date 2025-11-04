#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin>>n;
    int num=0;
	while(n>3){
		n=n/4;
		num++;
	}
	int ans=1;
	for(int i=0;i<num;i++){
		ans*=2;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
