#include<bits/stdc++.h>
using namespace std;
string s;
int type(int c) { return c == '(' || c == ')'; }
bool check(int &i,int pre){
	if(i==s.size())return 1;
	if(pre>>type(s[i])&1)return 0;
	pre |= 1 << type(s[i]);
	int t=i;
	while(type(s[i + 1]) != type(s[i])) i += 1;
	int j=i+1;
	while(i>=t){
		if(type(s[i])!=type(s[j]))return 0;
		i--;j++;
	}
	return check(i=j,pre);
}
/*
6
))
((()
[()]
()[()]()
([()])
([])([])
*/
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		int i=0;
		if(check(i,0))cout<<"yes\n";
		else cout<<"No\n";
	}
}
