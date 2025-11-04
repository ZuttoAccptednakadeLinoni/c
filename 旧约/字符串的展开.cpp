#include<bits/stdc++.h>
using namespace std;


int main() {
	int a,b,c;
	cin>>a>>b>>c;
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++) {
		if(s[i]=='-'&&(((s[i-1]>='0'&&s[i-1]<='9')&&(s[i+1]>='0'&&s[i+1]<='9'))||((s[i+1]>='a'&&s[i+1]<='z')&&(s[i-1]>='a'&&s[i-1]<='z')))) {
			if(s[i-1]+1==s[i+1])continue;
			if(s[i-1]>=s[i+1]) {
				cout<<"-";
				continue;
			}
			if(a==3) {
				for(int j=s[i+1]-1; j>s[i-1]; j--) {
					for(int q=0; q<b; q++) {
						cout<<'*';
					}
				}
				continue;
			} else if(a==2&&(!(s[i-1]>='0'&&s[i-1]<='9'))) {
				if(c==2) {
					for(int j=s[i+1]-1; j>s[i-1]; j--) {
						for(int q=0; q<b; q++) {
							cout<<(char)(j+'A'-'a');
						}
					}
					continue;
				}else if(c==1){
					for(int j=s[i-1]+1; j<s[i+1];j++) {
						for(int q=0; q<b; q++) {
							cout<<(char)(j+'A'-'a');
						}
					}
				}
				continue;
			} else if(a==1||(s[i-1]>='0'&&s[i-1]<='9')) {
				if(c==2) {
					for(int j=s[i+1]-1; j>s[i-1]; j--) {
						for(int q=0; q<b; q++) {
							cout<<(char)j;
						}
					}
					continue;
				}else if(c==1){
					for(int j=s[i-1]+1; j<s[i+1];j++) {
						for(int q=0; q<b; q++) {
							cout<<(char)j;
						}
					}
					continue;
				}
			}
			
		}
		cout<<s[i];
	}

}

