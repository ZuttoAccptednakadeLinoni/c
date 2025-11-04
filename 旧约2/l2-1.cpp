#include<bits/stdc++.h>
using namespace std;



int main(){
	string s;
	cin>>s;
	stack<char>st;
	for(int i=0;i<s.size();i++){
		if(s[i]==')'){
			string ans;
			while(st.top()!='('){
				ans=st.top()+ans;
				st.pop();
			}
			st.pop();
			cout<<ans<<endl;
		}
		else{
			st.push(s[i]);
		}
	}
}
