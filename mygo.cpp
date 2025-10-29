#include<iostream>
#include<string>
using namespace std;
long long int a[5];
int main(){
	string s;int n;
	cin>>n;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='m')a[0]++;
		else if(s[i]=='y')a[1]=(a[1]+a[0])%1000000007;
		else if(s[i]=='g')a[2]=(a[2]+a[1])%1000000007;
		else if(s[i]=='o')a[3]=(a[3]+a[2])%1000000007;
	}
	cout<<a[3];
}
