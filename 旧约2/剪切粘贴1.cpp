#include<iostream>
#include<string>
using namespace std;



int main(){
	
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int q,w;
		cin>>q>>w;
		string a;
		for(int j=q;j<=w;j++){
			a+=s[j-1];
		}
	//	cout<<a<<endl;
		string r ,t;
		cin>>r>>t;
		s.erase(q-1,w-q+1);
	//	cout<<s<<endl;
		int e=s.find(r+t);
		//cout<<e<<endl;
	//	cout<<r+t<<endl;
		if(e==-1){
			s+=a;
		}else s.insert(e+r.size(),a);
		
	//	cout<<s<<endl;
	}
	cout<<s;
}
