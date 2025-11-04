#include<iostream>
using namespace std;

int arr[20];

int main(){
	int t,num,k;
	cin>>t;
	for(int i=0;i<t;i++){
		for(int j=0;j<20;j++){
			cin>>num>>k;
			if(num==1)arr[j]+=12;
			else if(num==2)arr[j]+=9;
			else if(num==3)arr[j]+=7;
			else if(num==4)arr[j]+=5;
			else if(num==5)arr[j]+=4;
			else if(num>=6&&num<=7)arr[j]+=3;
			else if(num>=8&&num<=10)arr[j]+=2;
			else if(num>=11&&num<=15)arr[j]+=1;
			else if(num>=16&&num<=20)arr[j]+=0;
			arr[j]+=k;
		}
	}
	for(int i=0;i<20;i++){
		cout<<i+1<<" "<<arr[i]<<endl;
	}
}
