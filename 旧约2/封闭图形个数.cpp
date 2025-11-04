#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
int arr[11]={1,0,0,0,1,0,1,0,2,1};
pp q[200005];
int main(){
	int n;
	cin>>n;
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		q[i].second=t;
		while(t>0){
			q[i].first+=arr[t%10];
			t/=10;
		}
	}
	sort(q,q+n);
	for(int i=0;i<n;i++){
		cout<<q[i].second<<" ";
	}
}
