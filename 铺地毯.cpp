#include<bits/stdc++.h>
using namespace std;

int xa[100005],ya[100005],xb[100005],yb[100005],x,y;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>xa[i]>>ya[i]>>xb[i]>>yb[i];
	}
	cin>>x>>y;
	for(int i=n-1;i>=0;i--){
		if(x>=xa[i]&&x<=xa[i]+xb[i]&&y>=ya[i]&&y<=ya[i]+yb[i]){
			cout<<i+1;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
