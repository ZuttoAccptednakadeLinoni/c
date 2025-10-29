#include <bits/stdc++.h>
int w,b,n,t;
int main(){
	using namespace std; 
	cin>>n;
	for (int i=1;i=n;i++){
		cout<<i<<endl;
		cin>>w>>b;
		t=1;
		while(t*(t+1)/2<=w+b){
			t++;
		}
		cout<<t-1<<endl;
	}
}
