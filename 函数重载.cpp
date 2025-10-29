#include<iostream>
using namespace std;
int Add(int n1,int n2=1){
	return n1+n2;
}
double Add(double n1,double n2){
	return n1+n2;
}
int main() {

	int n1,n2;

	cin>>n1>>n2;
	cout << Add(n1, n2) << endl;

	cin>>n1;
	cout << Add(n1) << endl;

	double d1,d2;
	cin>>d1>>d2;
	cout << Add(d1,d2) << endl;

	return 0;
}
