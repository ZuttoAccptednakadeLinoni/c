#include<iostream>
using namespace std;

int main(){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int q=0;q<2;q++){
				cout<<i<<j<<q<<"||";
				cout<<(i&&j||q)<<endl;
			}
		}
	}
}
