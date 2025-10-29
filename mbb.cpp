#include<iostream>
using namespace std;

class Bubble{
	public:
		Bubble(int a){
			t=a;
		}
		friend ostream& operator<<(ostream& out,Bubble& a);
	private:
	int t;	
};
		ostream& operator<<(ostream& out,Bubble& a){
			out<<a.t;
			return out;
		}

int main() {

	int  r=0;
	cin >> r;
	Bubble a (r); //²ÎÊıÊÇÔ²°ë¾¶

	cout<<a;

	return 0;

}
