#include<bits/stdc++.h>
using namespace std;

class base{
	public:
		base(){
			cout<<"constructing base class\n";
		}
		~base(){
			cout<<"destructing base class\n";
		}
};
class subs : public base{
	public:
		subs(){
			cout<<"constructing sub class\n";
		}
		~subs(){
			cout<<"destructing sub class\n";
		}
};
int main() {
	subs s;

	return 0;
}
