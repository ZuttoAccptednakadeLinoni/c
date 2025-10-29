#include<bits/stdc++.h>
using namespace std;



int main(){
	string s,d,a,b;
	cin>>a>>b;

	for (int i = 1; i <a.size(); i++) {
  		if (a[i] % 2 == a[i-1] % 2) {
    		s += max(a[i], a[i-1]);
  		}
	}
	for (int i = 1; i < b.size(); i++) {
  		if (b[i] % 2 == b[i-1] % 2) {
    		d += max(b[i], b[i-1]);
  		}
	}
	if(s==d)cout<<s<<endl;
	else{
		cout<<s<<endl<<d<<endl;
	}
}
