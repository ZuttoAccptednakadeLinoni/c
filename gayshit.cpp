#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	bool f=1;
	cin>>s;
	int sa=0,fo=0,fa=0,u=0,num=0;
	for(int i=0;i<s.size();i++){
		if(num>90){
			f=0;
			break;
		}
		num++;
		if(s[i]=='3'){
			sa++;
			if(sa>=10){
				f=0;
				break;
			}
		}else if(s[i]=='4'){
			sa=0;
		}else if(s[i]=='5'){
			fa++;
			sa=0;
			num=0;
			if(fa>=2){
				f=0;
				break;
			}
		}else if(s[i]=='U'){
			num=0;
			fa=0;
			sa=0;
		}
	}
	if(f)cout<<"valid\n";
	else cout<<"invalid\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
