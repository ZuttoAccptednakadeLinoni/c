#include<iostream>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int sum=0,x=1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1;a+n+1);
		n=unique(a+1,a+n+1)-a-1;
		int flag=0;
		for(int i=1;i<=n;i++){
			if(a[i]!=i){
				flag=i-1;
				break;
			}else if(a[i]==i)flag=-1;
		}
		if(flag%2==1&&flag!=n||n%2==0&&flag=-1)cout<<"Bob"<<endl;;
		else cout<<"Alice"<<endl;
	}
} 
