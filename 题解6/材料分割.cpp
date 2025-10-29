#include<bits/stdc++.h>
using namespace std;

int arr[10000005];
int mg[10000005];
int main(){
	int n,qw;
	cin>>n>>qw;
	
	queue<int> q;
	q.push(n);
	mg[n]++;
	while(!q.empty()){
		int a;
		a=q.front();
		q.pop();
		if(a%3==0){
			if(!mg[a/3]){
				q.push(a/3);
				mg[(a/3)]++;
			}
			if(!mg[(a/3)*2]){
				q.push((a/3)*2);
				mg[(a/3)*2]++;
			}
		}
	}
	int e;
	for(int i=0;i<qw;i++){
		cin>>e;
		if(mg[e])cout<<"YES\n";
		else cout<<"NO\n";
	}
} 













