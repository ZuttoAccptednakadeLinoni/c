#include<bits/stdc++.h>
using namespace std;

class Bubble{
	public:
		Bubble(int a){
			r=a;
		}
		int getRadius(){
			return r;
		}
		Bubble* operator++(){
			r++;
			return this;
		}
		Bubble operator+(Bubble b){
			return Bubble(r+b.getRadius());
		}
		bool operator<(Bubble b){
			if(r<b.getRadius())return 1;
			else return 0;
		}
	private:
		int r;	
};

int main() {

	int  r=0;
	cin >> r;
	Bubble a (r); 

	cin >> r;

	Bubble b (r);

	Bubble c = a + b;

	cout<<c.getRadius()<<endl;
	++c;
	cout<<c.getRadius()<<endl;

	if(a<b) cout<<"a<b"<<endl;
	else cout<<"a>=b"<<endl;

	return 0;

}
