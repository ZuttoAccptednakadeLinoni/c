#include<iostream>
using namespace std;
template<typename t>
t Add(t n1,t n2=1) {
	return n1+n2;
}

int main(){

	int n1,n2;

	cin>>n1>>n2;
	cout << Add(n1, n2) << endl;

	double d1,d2;
	cin>>d1>>d2;
	cout << Add(d1,d2) << endl;

	return 0;
}
