#include<bits/stdc++.h>
using namespace std;

int arr[1005][1005]; 
int mm[1005][1005];
int main(){
	default_random_engine e;
	ofstream fout("2.in");
    e.seed(time(0));
	int num=0;
	fout<<1<<endl;
	for(int i=0;i<1000;i++){
		for(int j=0;j<1000;j++){
			arr[i][j]=num;
			num++;
		}
	}
	for(int o=0;o<1;o++){
	/*	for(int i=0;i<100;i++){
			for(int j=0;j<100;j++){
				mm[i][j]=0;
			}
		} 
*/	num=0;
	fout<<1000<<" "<<1000<<endl; 
	while(num<1000000){
		int q= e()%1000000;
		if(!mm[q%1000][q/1000]){
			
			fout<<arr[q%1000][q/1000]<<" ";

			mm[q%1000][q/1000]=1;
			num++;
			if(num%1000==0)fout<<endl;
		}	
	}
	}

} 
