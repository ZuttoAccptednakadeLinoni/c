#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string n;
	char a;
	int num=0;
	cin>>n;
	ifstream input(n.c_str());
	while(!input.eof()){
		input>>a;
		num++;	
	}
	cout<<num;
}
