#include<bits/stdc++.h>
using namespace std;
#define int long long

//2118 3536
signed main(){
	int x=343720*17;
	int y=233333*15;
	if(2118*343720/15==3536*233333/17)cout<<"YES";
	cout<<2118*343720/15<<endl;
	//		   48533264
	for(int i=y;i>0;i--){
		if(x%i==0&&y%i==0){
			cout<<(x/i)*2<<" "<<(y/i)*2;
			return 0;
		}
	}
	cout<<1<<endl;
}
