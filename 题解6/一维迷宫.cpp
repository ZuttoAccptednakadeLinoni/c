#include<bits/stdc++.h>
using namespace std;

int arr[100005];
int mg[100005];
int main(){
	int n,t,w,ed;
	cin>>n>>t>>ed;
	for(int i=0;i<t;i++){
		cin>>w;
		arr[w]++;
	}
	queue<int> q;
	q.push(1);
	mg[1]++;
	while(!q.empty()){
		int a;
		a=q.front();
		q.pop();
		if(a==ed){
			cout<<"YES\n";
			return 0;
		}
		if(!mg[a-1]&&!arr[a-1]&&a-1<=n&&a-1>0){
			q.push(a-1);
			mg[a-1]++;
		}
		if(!mg[a+2]&&!arr[a+2]&&a+2<=n&&a+2>0){
			q.push(a+2);
			mg[a+2]++;
		}
	}
	cout<<"NO\n";
} 













