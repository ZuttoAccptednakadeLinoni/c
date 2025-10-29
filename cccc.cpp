#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,t,ans,f,max=0;
	cin>>n;
	string s=to_string(n);
	for(int i=0;i<s.size();i++){
		if(s[i]>max)max=s[i];
	}
	cout<<max-'0'<<endl;
	while(true){
		f=0;
		for(int i=0;i<s.size();i++){
			if(s[i]!='0')f=1;
			if(s[i]>'0'&&f==1){
				cout<<'1';
				s[i]=s[i]-1;
			}else if(s[i]=='0'&&f==1)cout<<'0';
		}
		cout<<" ";
		if(f==0)break;
	}
}
