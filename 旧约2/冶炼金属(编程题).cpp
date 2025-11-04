#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
pp arr[10005];

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int q,w;
		cin>>q>>w;
		arr[i]={q,w};
	}
	int i=0,j=1e9,m,ans;
	while(i<=j){
		m=(i+j)/2;
//		cout<<m<<endl;
		int f=1;
		for(int e=0;e<n;e++){
			if((int)arr[e].first/m<arr[e].second)f=0;
		}
		if(f){
			i=m+1;
			ans=m;
		}else{
			j=m-1;
		}
	}
	cout<<ans<<endl;
	i=0,j=1e9;
	while(i<=j){
		m=(i+j)/2;
		int f=1;
		for(int e=0;e<n;e++){
			if(arr[e].second*m>arr[e].first)f=0;
		}
		if(f){
			j=m-1;
			ans=m;
		}else{
			i=m+1;
		}
	}
	cout<<ans<<endl;
}
