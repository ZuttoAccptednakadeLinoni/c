#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005],num,n,m;
void solve(int i,int j){
	if(i<=0||i>n||j<=0||j>m)return;
	if(arr[i][j]==0
			&&arr[i+1][j]!=1&&arr[i+1][j+1]!=1
			&&arr[i][j+1]!=1&&arr[i-1][j+1]!=1
			&&arr[i-1][j]!=1&&arr[i-1][j-1]!=1
			&&arr[i][j-1]!=1&&arr[i+1][j-1]!=1){
				num++;
				cout<<i<<" "<<j<<endl;
			}
			
}
int main(){
	char q;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>q;
			if(q=='.'){
				arr[i][j]=0;
			}else if(q=='c'){
				arr[i][j]=1;
			}else if(q=='w'){
				arr[i][j]=2;
			}else if(q=='m'){
				arr[i][j]=3;
			}
		}
	}
	if(n==1&&m==1&&arr[1][1]==2){
		cout<<"Too cold!";
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(arr[i][j]==2
			&&arr[i+1][j]!=3&&arr[i+1][j+1]!=3
			&&arr[i][j+1]!=3&&arr[i-1][j+1]!=3
			&&arr[i-1][j]!=3&&arr[i-1][j-1]!=3
			&&arr[i][j-1]!=3&&arr[i+1][j-1]!=3){
				
				solve(i-1,j-1);
				solve(i-1,j);
				solve(i-1,j+1);
				solve(i,j-1);
				solve(i,j+1);
				solve(i+1,j-1);
				solve(i+1,j);
				solve(i+1,j+1);
				
				if(!num)cout<<"Too cold!";
				return 0;
			}
		}
	}
}
