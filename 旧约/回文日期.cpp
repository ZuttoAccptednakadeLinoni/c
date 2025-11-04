#include<bits/stdc++.h>
using namespace std;

int y[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int c,sum,ans=0;
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=1;i<13;i++){
		for(int j=y[i];j>0;j--){
			c=i/10+i%10*10+j/10*100+j%10*1000;
			sum=c*10000+i*100+j;
			if(sum>=a&&sum<=b){
				
				ans++;
			}
		}
	}
	cout<<ans;
}
