#include<iostream>
using namespace std;
inline int f(int x){
	if(x<0)return -x*2;
	else return x*2;
}

int main(){
	int n;
	cin>>n;
	cout<<f(n);
}
