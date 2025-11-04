#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int num=0;
	int ans=0;
	int f=0,t=0;
	
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1])num++;
		else {
			if(num>0&&(num+1)%2==0)f++;
			ans+=(num+1)/2;
			t=1;
			num=0;
		}
	}
	if(num>0&&(num+1)%2==0)f++;
	ans+=(num+1)/2;
	
	
	if((s[0]!=s[s.size()-1]&&f)){
		ans--;
		cout<<max(ans,0)<<endl;
		return;
	}
	if(s[0]==s[s.size()-1]){
		int w=0;
		for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1])w++;
		else {
			w++,num++;
			if((w+num)%2!=0&&(f-(w%2)-(num%2)))ans--;
			if((w+num)%2==0&&t&&(w%2!=1))ans--;
			break;
		}
		}
		cout<<max(ans,0)<<endl;
		return;
	}
	cout<<max(ans,0)<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
