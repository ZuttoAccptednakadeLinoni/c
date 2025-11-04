#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream b("temp.bot",ios::out|ios::binary|ios::in);
	int value=199;
	b.write(reinterpret_cast<char*>(&value),sizeof(value));
	b.read(reinterpret_cast<char*>(&value),sizeof(value));
	b.close();
	cout<<value;
	return 0;
}
