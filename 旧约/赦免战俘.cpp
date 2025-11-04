#include<bits/stdc++.h>
using namespace std;
int n;
int er[]={1,2,4,8,16,32,64,128,256,512,1024};
int a[2000][2000];
void solve(int l,int x,int y){
	if(l<0)return;
	for(int i=0;i<er[l];i++){
		for(int j=0;j<er[l];j++){
			a[x+i][y+j]=0;
		}
	}
	
	solve(l-1,er[l]+x,y);
	solve(l-1,x,er[l]+y);	
	solve(l-1,er[l]+x,er[l]+y);
}
int main(){
	cin>>n;
	int t=n;
	for(int i=1;i<=er[n];i++){
		for(int j=1;j<=er[n];j++){
			a[i][j]=1;
		}
	}
	solve(t-1,1,1);
	for(int i=1;i<=er[n];i++){
		for(int j=1;j<=er[n];j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
