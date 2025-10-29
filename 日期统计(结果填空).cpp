#include<bits/stdc++.h>
using namespace std;

int arr[105];
int day[9];
int main(){
	for(int i=0;i<100;i++){
		cin>>arr[i];
	}
	int ans=0;
	day[0]=2;
	day[1]=0;
	day[2]=2;
	day[3]=3;
	for(int i=1;i<31;i++){
		day[4]=0;
		day[5]=1;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
		
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}
			num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<28;i++){
		day[4]=0;
		day[5]=2;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<31;i++){
		day[4]=0;
		day[5]=3;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<30;i++){
		day[4]=0;
		day[5]=4;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<31;i++){
		day[4]=0;
		day[5]=5;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<30;i++){
		day[4]=0;
		day[5]=6;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<31;i++){
		day[4]=0;
		day[5]=7;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<31;i++){
		day[4]=0;
		day[5]=8;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<30;i++){
		day[4]=0;
		day[5]=9;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<31;i++){
		day[4]=1;
		day[5]=0;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<30;i++){
		day[4]=1;
		day[5]=1;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	for(int i=1;i<31;i++){
		day[4]=1;
		day[5]=2;
		day[6]=i/10;
		day[7]=i%10;
		int num=0;
		int f=1;
		for(int j=0;j<8;j++){
			while(arr[num]!=day[j]){
				num++;
				if(num==100){
					f=0;
					break;
				}
				
			}num++;
			if(!f)break;
			if(f&&j==7)ans++;
		}
	}
	cout<<ans<<endl;
} 
