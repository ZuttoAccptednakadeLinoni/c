#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int a,sum=0;
	fstream binaryio;
	srand(time(0));
	binaryio.open("score.dat",ios::out|ios::binary|ios::in);
	for(int i=0;i<1000;i++){
		a=(rand()%100)+1;
		binaryio.write(reinterpret_cast<char*>(&a),sizeof(a));		
	}
	binaryio.close();
	binaryio.open("score.dat",ios::binary|ios::in);
	for(int i=0;i<1000;i++){
		binaryio.read(reinterpret_cast<char*>(&a),sizeof(a));
		cout<<a<<" ";
		sum+=a;		
	}
	cout<<endl;
	binaryio.close();
	cout<<sum/1000;
}
