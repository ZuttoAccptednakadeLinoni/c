#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	ofstream output("Excercise13_1.txt");
	srand(time(0));
	int a,sum=0;
	int t;
	for(int i=0;i<1000;i++){
		a=(rand()%100)+1;
		output<<a<<" ";
	}
	output.close();
	ifstream input("Excercise13_1.txt");
	for(int i=0;i<1000;i++){
		input>>t;
		cout<<t<<" ";
		sum+=t;
	}
	cout<<endl;
	input.close();
	cout<<sum/1000;
} 
