#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if(c==a*b)cout<<"Lv Yan\n";
	else if(c==a+b)cout<<"Tu Dou\n";
	else cout<<"zhe du shi sha ya!\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
