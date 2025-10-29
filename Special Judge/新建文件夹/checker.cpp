#include "testlib.h"
#include<bits/stdc++.h>
using namespace std; 
int arr[10000];
int main(int argc, char* argv[]) {
	registerTestlibCmd(argc, argv);
	int pin=ouf.readInt();
	int piq,sum=0;
	for(int i=0;i<pin;i++){
		piq=ouf.readInt()£» 
		arr[i]=piq;
		sum+=piq;
	} 
	sort(arr,arr+pin);
	int p=inf.readInt();
	int z=inf.readInt();
	if(pin%2==0){
		if((sum/pin==p&&sum%pin==0)&&((arr[pin/2-1]+arr[pin/2])/2==z))quitf(_ok, "The answer is correct.");
		else quitf(_wa, "The answer is wrong");
	}else {
		if((sum/pin==p&&sum%pin==0)&&((arr[pin/2])==z))quitf(_ok, "The answer is correct.");
		else quitf(_wa, "The answer is wrong");
	}
}
