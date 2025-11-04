#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string s,d;
	cin>>s>>d;
	int num=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			if(s[i]=='1')num++;
		}else {
			if(d[i]=='1')num++;
			
		}
	}
	if(num>n/2){
		cout<<"NO\n";
		return;
	}
	num=0;
	for(int i=0;i<n;i++){
		if(i%2==1){
			if(s[i]=='1')num++;
		}else {
			if(d[i]=='1')num++;
			
		}
	}
	if(num>n/2+(n%2>0)){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
