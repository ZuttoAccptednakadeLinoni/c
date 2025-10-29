#include<bits/stdc++.h>
#include<iostream>
#include<random>
#include<fstream>
#include <ctime>
using namespace std;



int main(){
	default_random_engine e;
    e.seed(time(0));
    ofstream fout("1.in");
    fout << 1000 << '\n';
    
    for (int i = 0; i < 1000; i++) {

    		int q= e()%10+1;
    		fout<<q<<" "<<e()%10<<endl;
    		for(int i=0;i<q;i++){
    			fout<<e()%10<<" "<<e()%10+1<<endl;
			} 
		}


    fout.close();
    return 0;
}

