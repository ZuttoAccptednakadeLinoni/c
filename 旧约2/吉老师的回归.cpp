#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,m;
	string s,ans;
	cin>>n>>m;
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,s);
		if(m==0)ans=s;
		if(s.find("qiandao")==-1&&s.find("easy")==-1)m--;
	}
	if(m>=0)cout<<"Wo AK le";
	else cout<<ans;
}
