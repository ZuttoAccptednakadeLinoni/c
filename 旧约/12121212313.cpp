#include<bits/stdc++.h>
using namespace std;

class myString{
	public:
		myString(); 
		myString(const char* cString){
			int l=strlen(cString);
			d=new char[l+1];
			for(int i=0;i<l;i++){
				d[i]=cString[i];
			} 
		}
		void assign(const char* s){
			int l=strlen(s);
			d=new char[l+1];
			for(int i=0;i<l;i++){
				d[i]=s[i];
			}			
		}
		char* data() const{
			return d;
		}
		int length() const{
			return	strlen(d);
		}
		int cmp(const myString& s) const{
			int l=s.length();
			if(l!=strlen(d))return 0;
			char* s1=s.data();
			for(int i=0;i<l;i++){
				if(s1[i]!=d[i])return 0;
			}
			return 1;
		}
	private:
		char* d;
};


int main() {
	myString s("Ningbo University of Technology");
	cout<<s.length()<<endl;

	myString s2(s);
	cout<<s.cmp(s2)<<endl;

	s.assign("NBUT");
	cout<<s.length()<<endl;

	cout<<s.data()<<endl;
	cout<<s2.data()<<endl;


	return 0;
}
